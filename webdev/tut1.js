function input_toJSON(){
    tit=document.getElementById("title");
    desc=document.getElementById("description");
    if(localStorage.getItem('jsonelement')==null){
        json_element_arr=[];
        json_element_arr.push([tit.value,desc.value]);
        localStorage.setItem('jsonelement',JSON.stringify(json_element_arr));
        
    }
    else{
        json_element_arr=JSON.parse(localStorage.getItem('jsonelement'));
        json_element_arr.push([tit.value,desc.value]);
        localStorage.setItem('jsonelement',JSON.stringify(json_element_arr));
        
    }
}

// function getAndUpdate(){
//         console.log("Updating List...");
//         tit = document.getElementById('title');
//         desc = document.getElementById('description')
//         if (localStorage.getItem('itemsJson')==null){
//             itemJsonArray = [];
//             itemJsonArray.push([tit.value, desc.value]);
//             localStorage.setItem('itemsJson', JSON.stringify(itemJsonArray))
//         }
//         else{
//             itemJsonArrayStr = localStorage.getItem('itemsJson')
//             itemJsonArray = JSON.parse(itemJsonArrayStr);
//             itemJsonArray.push([tit.value, desc.value]);
//             localStorage.setItem('itemsJson', JSON.stringify(itemJsonArray))
//         }}
add=document.getElementById("add");
add.addEventListener('click',input_toJSON);
    
