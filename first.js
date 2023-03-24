let btn = document.querySelector(".btn");
const changeColor=()=> {
    const randomNumber=Math.ceil(Math.random()*16777215).toString(16);
   document.body.style.backgroundColor= '#'+randomNumber;
   document.querySelector(".colorCode").innerHTML="#"+randomNumber;
//    document.querySelector(".colorCode").style.color="#"+ randomNumber;
   btn.style.color="#"+randomNumber;
}
changeColor();
btn.addEventListener("click",changeColor);