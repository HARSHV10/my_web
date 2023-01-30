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

        <h2 class="text">${item.title} </h2>
        <a class="logo" href='${item.url}target="_blank"><span class="material-symbols-outlined">
            folder_open
        </span></a></div>
    </div>`
})

$('.link').html(s);

