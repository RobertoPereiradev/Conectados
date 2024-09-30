const galeriaitem = document.querySelectorAll('.galeria-item');
const lightbox = document.querySelector('.light-box');
const image = document.querySelector('#light-image');
const btnclose = document.querySelector('.lightbox-close');

galeriaitem.forEach((item) => {
    item.addEventListener("click", () => {
        const imageurl = item.querySelector('.galeria-foto').getAttribute('data-src');
            image.setAttribute('src', imageurl);
            lightbox.style.display = "flex";
            btnclose.style.display = "flex";
    })
})

btnclose.addEventListener("click", () => {
    lightbox.style.display = "none";
    btnclose.style.display = "none";
})

