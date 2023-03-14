import React, { useState, useRef } from "react";
import styles from "./App.module.css";
import { Send } from "react-feather";
import dpIcon from "./dpicon.png";
function App() {
  const [processing, setProcessing] = useState(false);
  const [textMsg, setTextMsg] = useState();
  const [messages, setMessages] = useState([
    {
      from: "ai",
      text: "Hi! I am your Ai chat. I can help you with your questions. Ask me anything you want :)",
    },
  ]);
  const lastMsg = useRef();

  const fetchDetails = async () => {
    if (!textMsg.trim() || processing) return;

    const tempMessages = [
      ...messages,
      {
        from: "User",
        text: textMsg,
      },
    ];

    setMessages(tempMessages);
    setTextMsg("");

    try {
      setProcessing(true);
      setTimeout(() => {
        lastMsg.current.scrollIntoView({ behavior: "smooth" });
      });
      const res = await fetch("http://localhost:5000/chat", {
        method: "POST",
        headers: {
          "content-type": "application/json",
        },
        body: JSON.stringify({
          messages: tempMessages.slice(-6),
        }),
      });
      const data = await res.json();
      const ans = data.data;
      setMessages((prev) => [
        ...prev,
        {
          from: "ai",
          text: ans,
        },
      ]);
      setProcessing(false);
      setTimeout(() => {
        lastMsg.current.scrollIntoView();
      });
    } catch (error) {
      setMessages((prev) => [
        ...prev,
        {
          from: "ai",
          text: error,
        },
      ]);
    }
  };

  return (
    <div className={styles.App}>
      <div className={styles.header}>
        <div className={styles.icon}>
          <img src={dpIcon} alt="ai" />
        </div>
        <div className={styles.title}>Ai chatBOX</div>
      </div>
      <div className={styles.body}>
        {messages.map((msg, index) => (
          <div
            key={index}
            className={`${styles.msg} ${
              msg.from === "ai" ? styles.mLeft : styles.mRight
            } `}
          >
            {msg.from === "ai" ? (
              <div className={styles.icon}>
                <img src={dpIcon} alt="ai" />
              </div>
            ) : (
              ""
            )}
            <div className={styles.text}>{msg.text}</div>
          </div>
        ))}
        {processing ? (
          <div className={styles.typing}>
            <div className={styles.dot}></div>
            <div className={styles.dot}></div>
            <div className={styles.dot}></div>
          </div>
        ) : (
          ""
        )}
        <div ref={lastMsg} />
      </div>

      <div className={styles.footer}>
        <input
          type="text"
          placeholder="Enter your text here..."
          value={textMsg || ""}
          onChange={(e) => setTextMsg(e.target.value)}
          onKeyUp={(event) => (event.key === "Enter" ? fetchDetails() : "")}
        />
        <div className={styles.btn} onClick={fetchDetails}>
          <div className={styles.icon}>
            <Send />
          </div>
        </div>
      </div>
    </div>
  );
}

export default App;
