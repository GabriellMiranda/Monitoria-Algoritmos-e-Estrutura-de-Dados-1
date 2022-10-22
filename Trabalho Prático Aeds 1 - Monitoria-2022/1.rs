fn main(){
    let mut pessoa1 = Pessoa{
    email: String::from("victoria.rodrigues@ufv.br"),
    nome: String::from("Victoria"),
    conta: true,
    valor: 1,
    };
    println!("{}", pessoa1.email);
    println!("Alterando o valor do campo email:");
    pessoa1.email = String::from("victoria.rodrigues@gmail.com");
    println!("{}", pessoa1.email);
}
 
 
 




