// alert("hello")
const data=[
   {
    url:"CM(1).pdf",
    title:"CM 3rd sem",
   },
   {
    url:"CM(1).pdf",
    title:"CM",
    sem:"3rd"
   }
]
{

}

var s=``;
data.forEach(function(item,index){
    s+=`<div class="into">
    <div class="car">
    <a class="logo" href='${item.url}target="_blank">
        <h2 class="text">${item.title} </h2>
        <span class="material-symbols-outlined">
            folder_open
        </span></div>
        </a>
    </div>`
})

$('.link').html(s);

