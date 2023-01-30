// alert("hello")
const data=[
   {
    url:"CM(1).pdf",
    title:"CM ",
    sem: "3rd"
   },
   {
    url:"dlcd.pdf",
    title:"DLCD",
    sem:"3rd"
   }
]
{

}

var s=``;
data.forEach(function(item,index){
    s+=`<a href='${item.url}'>
    <div class="into">
    <div class="car">
    <p class="text">${item.title + " "+ item.sem}</p>
    <span class="material-symbols-outlined">
    open_in_new
    </span>
    </div>
    </div>
    </a>`
})

$('.link').html(s);

