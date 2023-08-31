const getAmazonProduct = () => {
    const img = getImg();
    
    
}
getAmazonProduct();


const getImg = ()=>{
    const imgs = document.querySelectorAll('.s-image');
    imgs.forEach(img => console.log(img.currentSrc))   
    const arr = [...imgs]
    const url = arr.map(x=> x.src)
    console.log(imgs);
}
const getTitle = ()=>{
    const titles = document.querySelectorAll('.a-size-base-plus.a-color-base.a-text-normal');
    titles.forEach(val => console.log(val.innerText))  
    const arr = [...titles]
    const title = arr.map(x=> x.innerText)
    console.log(title);
}
getTitle();
const getPrice = ()=>{
    const prices = document.querySelectorAll('.a-row.a-size-base.a-color-base.a-size-base.a-link-normal.s-no-hover.s-underline-text.s-underline-link-text.s-link-style.a-text-normal.a-price.a-offscreen'); 
    prices.forEach(val => console.log(val.innerText))  
    const arr = [...prices]
    // const url = arr.map(x=> x.src)
    // console.log(titles);
}
getPrice();
console.log(prices);
const allCard = document.querySelectorAll('[data-asin]')
document.querySelectorAll('.a-row.a-size-base.a-color-base a')[0].innerText.split(' ',1)