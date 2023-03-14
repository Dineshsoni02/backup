const SECRET_KEY = "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";

const input = document.querySelector(".textInput");
const btn = document.querySelector(".btn");
const results = document.querySelector(".results");

const state = {
  processing: false,
};
const fetchData = async (value) => {
  if (!value) return;

  const reqUrl = "https://api.openai.com/v1/images/generations";

  try {
    const response = await fetch(reqUrl, {
      method: "POST",
      headers: {
        "content-type": "application/json",
        Authorization: `Bearer ${SECRET_KEY}`,
      },
      body: JSON.stringify({
        prompt: value,
        n: 6,
        size: "1024x1024",
      }),
    });

    const data = await response.json();
    const res = data?.data;
    if (!Array.isArray(res)) return;
    const urls = res.map((item) => item.url);
    //   console.log(urls);
    results.innerHTML = "";
    urls.forEach((url) => {
      const img = document.createElement("img");
      img.src = url;

      results.appendChild(img);
    });
  } catch (error) {
    console.log(error);
  }
};

const handleClick = async () => {
  if (!input.value || state.processing) return;
  results.innerHTML = "<h3>Loading...</h3>";
  state.processing = true;
  btn.innerHTML = "Generating...";
  await fetchData(input?.value);
  state.processing = false;
  btn.innerHTML = "Generate";
};

btn.addEventListener("click", handleClick);
input.addEventListener("keypress", (e) => {
  if (e.key === "Enter") {
    e.preventDefault();
    handleClick();
  }
});
