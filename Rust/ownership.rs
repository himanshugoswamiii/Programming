fn main(){
    let s1 = String::from("Hello");
    println!("{}",s1);
    let s2 = s1;
    // println!("{}",s1);  // This line won't compile because s1 no longer owns the memory allocated for "hello"
    println!("{}",s2);

}
