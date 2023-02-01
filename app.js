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
   },
   {
    url:"oops/2.txt",
    title:"2.text",
    sem:"3rd"
   },
   {
    url:"oops/mat.txt",
    title:"mat",
    sem:"3rd"
   },
   {
    url:"oops/str.txt",
    title:"str",
    sem:"3rd"
   },
   {
    url:"oops/str_2.txt",
    title:"str_2",
    sem:"3rd"
   },
   {
    url:"oops/temp.txt",
    title:"template",
    sem:"3rd"
   },
   {
    url:"oops/friend.txt",
    title:"hello_friend",
    sem:"3rd"
   },
   {
    url:"oops/comp.txt",
    title:"comp",
    sem:"3rd"
   },
   {
    url:"oops/virt.txt",
    title:"virt",
    sem:"3rd"
   },
   {
    url:"ds/queue.c",
    title:"queue",
    sem:"3rd"
   },
   {
    url:"ds/ll.c",
    title:"ll",
    sem:"3rd"
   },
   {
    url:"ds/sparse.c",
    title:"spar",
    sem:"3rd"
   },
   {
    url:"ds/stack.c",
    title:"virt",
    sem:"3rd"
   },
]
{

}

$("html").keypress(function(e){
    if(e.originalEvent.key==='c'){
        window.close();
    }
})

var s=``;
data.forEach(function(item,index){
    s+=`<a href=${item.url} target="_blank">
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

