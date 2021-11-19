
function mySave() {
    var myText = document.getElementById("myTextarea").value;
    localStorage.setItem("myText", myText);
  }
  function myLoad() {
    var myText = localStorage.getItem("myText");
    document.getElementById("myTextarea").value = myText;
  }

function show_now() { 
  var my_time = new Date();
  alert(my_time);
  }


function changeColor(color) {
    document.body.style.background = color;
}
    
function bg_change() {
    changeColor('brown');
    
}  

function refreshPage(){
  window.location.reload();
} 



