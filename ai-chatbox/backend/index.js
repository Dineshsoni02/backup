const express = require("express");
const cors = require("cors");
const dotenv = require("dotenv");
const axios = require("axios");
dotenv.config();

const app = express();
app.use(cors());
app.use(express.json());

const openaiKey = process.env.OPENAI_KEY;

app.post("/chat", async (req, res) => {
  const { messages } = req.body;
  const requiredPrompt =
    "The following is a conversation with an AI assistant. The assistant is helpful, creative, clever, and very friendly.\n" +
    messages
      .map((item) => `${item.from == "ai" ? "AI:" : "Human:"} ${item.text} `)
      .join("\n") +
    "\nAI:";
  // console.log(requiredPrompt);
  if (!Array.isArray(messages) || !messages.length) {
    res.status(400).json({
      success: false,
      message: "Messages required",
    });
    return;
  }
  const reqUrl = "https://api.openai.com/v1/completions";
  const reqBody = {
    model: "text-davinci-003",
    prompt: requiredPrompt,
    max_tokens: 200,
    temperature: 0.6,
  };
  try {
    const response = await axios.post(reqUrl, reqBody, {
      headers: {
        "content-type": "application/json",
        Authorization: `Bearer ${openaiKey}`,
      },
    });
    const data = response.data;
    const ans = Array.isArray(data.choices) ? data.choices[0]?.text : "";
    res.status(200).json({
      success: true,
      data: ans.trim(),
    });
  } catch (error) {
    res.status(500).json({
      success: false,
      message: error.message || "Something went wrong",
      error: error,
    });
  }
});

app.listen(5000, () => console.log("Server is running at port 5000"));
