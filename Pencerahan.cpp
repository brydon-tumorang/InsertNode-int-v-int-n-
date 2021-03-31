Selamat Malam Teman-teman
Saya mau memberikan sedikit pencerahan mengenai konsep Double dan Single Linked List

===========================DOUBLE LINKED LIST=========================
1. 	Double Link List itu bisa di ibaratkan dengan gerbong kereta di depan dan belakang
	Gerbong tersebut memiliki Sebuah pengait yang menghubungkan nya dengan gerbong lain pengait tersebut
	jika bisa juga dinamakan pointer yang sering digunakan adalah head dan tail untuk sebuah data awal
	nah konsep nya sama seperti itu

2. 	jadi ketika kita ingin membuat sebuah Double Linked list kita harus membuat sebuah data awal 
	yang bisa disebut juga dengan "head" atau kepala, dikarenakan data awal tersebut hanya satu jadi dia 
	tidak terhubung dengan data yang lain nya, bisa di ibaratkan dengan gerbong penggerak kereta api nah
	sama persis dengan itu data yang ada masih standalone atau berdiri sendiri
	
3. 	jadi bisa dibuat jika data awal dibuat maka pointer tail akan sama dengan NULL karena tidak ada data setelah
	data awal dibuat

4. 	jika ditambahkan sebuah data yang berada di depan data awal maka bisa dibuat
	
	TambahDepan->next=head; kenapa next nya ke head karena datanya mau ditempatkan di depan data head jadi pengait atau pointer nya
							terhubung ke data yang bernama "head"
	
	head=TambahDepan;	Dikarenakan Data depan sudah menempati posisi "head" jadi bisa dibuat "head=TambahDepan"
	
	TambahDepan->prev=NULL; Kenapa bisa NULL karena tidak ada data sebelum "TambahDepan" jadi dibuat "NULL"
	
	
	=====================STRUKTUR COMPLETE PROGRAM=========================
	
	struct Belajar{
		int v;
		Belajar *prev;
		Belajar *next;
	}*TambahDepan, *head, *tail;
	
	   void DataAwal(int v){       ->>>Ini Merupakan Fungsi yang akan digunakan sebagai data Awal
			head = new Belajar();  ->>> dibuat Untuk Mendeklarasikan bahwa kita akan membuat sebuah data baru
			head->v=v;             ->> Variabel "v" ini digunakan sebagai wadah untuk kita melakukan input nilai di dalam sebuah linked list
			head->next=NULL;
			head->prev=NULL;
			tail=head;
			
		}
		
		
		void AddFirstNode(int v){          ->>>Ini Merupakan Fungsi yang akan digunakan Unutuk Menambahkan Data di Awal
			 TambahDepan = new Belajar();
			 TambahDepan->v=v;
			 TambahDepan->next=head;
			 TambahDepan->prev=NULL;
		     head->prev=TambahDepan;  	->> ini untuk menunjukkan bahwa sebelum Data awal terdapat data TambahDepan
			 head =TambahDepan;
		}
	
	
	int main(){
		DataAwal(0);		->> di dalam Buka dan tutup kurung tersebut data dapat dimasukkan kita bisa mengubahnya sesuka hati
		AddFirstNode(20);	->> di dalam Buka dan tutup kurung tersebut data dapat dimasukkan kita bisa mengubahnya sesuka hati
	}
	
	
