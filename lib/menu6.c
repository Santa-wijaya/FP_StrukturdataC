#include <stdio.h>
#include "data_type.h"

void heading(int n){
	system("cls");
	puts("====================================");
	if(n==1) puts("            INPUT DATA");
	else if(n==2) puts("             CARI TUGAS");
	else if(n==3) puts("             EDIT TUGAS");
	else if(n==4) puts("         LIHAT SEMUA TUGAS");
	else if(n==5) puts("         MARK AS COMPLETE");
	else if(n==6) puts("                EXIT");
	else puts("               GUIDE");
	puts("====================================");
}

void guide(){
	int pil,status=0;
	do{
		puts("");
		heading(0);
		puts("Selamat datang di Menu Help");
		puts("Menu ini berfungsi untuk membantu");
		puts("mengenai fungsi dan cara penggunaan");
		puts("tiap menu dalam program ini. Anda");
		puts("dapat melihat informasi tersebut");
		puts("dengan menginputkan menu yang Anda");
		puts("inginkan di bawah ini. Jika ingin");
		puts("kembali, silahkan ketik 6.");
		puts("Terima kasih :)");
		puts("====================================");
		puts("             PILIH MENU");
		puts("====================================");
		puts("1. Input Tugas");
		puts("2. Cari Tugas");
		puts("3. Edit Tugas");
		puts("4. Lihat Semua Tugas");
		puts("5. Mark as Complete");
		puts("6. Exit");
		puts("7. Kembali");
		puts("====================================");
		printf("Pilih menu : ");scanf("%d", &pil);
		switch(pil){
			case 1:
				heading(1);
				puts("Input Data berfungsi untuk");
				puts("menambahkan data dalam program. Anda");
				puts("akan diminta menginputkan Nama Tugas");
				puts(", Deadline, dan Level Prioritas.");
				puts("Nama Tugas berisi judul dari tugas");
				puts("yang akan dikerjakan.");
				puts("Deadline berisi batas waktu tugas.");
				puts("Anda akan menginputkan tanggal,");
				puts("bulan, dan tahun.");
				puts("Level Prioritas berisi tingkatan");
				puts("pentingnya tugas tersebut. Ada 4");
				puts("tingkatan, yaitu:");
				puts("  1. Penting & Mendesak");
			    puts("  2. Tidak Penting & Mendesak");
			    puts("  3. Penting & Tidak Mendesak");
			    puts("  4. Tidak Penting & Tidak Mendesak");
			    puts("====================================");
			    system("pause");
				break;
			case 2:
				heading(2);
				puts("Cari Data berfungsi untuk mencari");
				puts("data berdasarkan Nama Tugas,");
				puts("Deadline, dan Prioritas. Anda dapat");
				puts("memilih sesuai dengan kebutuhan.");
				puts("Jika berdasarkan Nama Tugas, Anda");
				puts("cukup menginputkan nama dari tugas");
				puts("yang dicari.");
				puts("Untuk Deadline, Anda akan");
				puts("menginputkan tanggal, bulan, dan");
				puts("tahun batas waktu tugas tersebut.");
				puts("Untuk Priority, Anda akan menginput");
				puts("level prioritas dari data yang");
				puts("dicari. Ada 4 tingkatan, yaitu:");
				puts("  1. Penting & Mendesak");
			    puts("  2. Tidak Penting & Mendesak");
			    puts("  3. Penting & Tidak Mendesak");
			    puts("  4. Tidak Penting & Tidak Mendesak");
			    puts("====================================");
			    system("pause");
				break;
			case 3:
				heading(3);
				puts("Edit Data berfungsi untuk mengedit");
				puts("data yang telah diinputkan. Dalam");
				puts("menu ini, berisi 3 pilihan data");
				puts("untuk diedit, yaitu Nama Tugas,");
				puts("Deadline, dan Priority.");
				puts("Untuk Nama Tugas, Anda pertama-tama");
				puts("akan diminta untuk menginputkan");
				puts("Nama Tugas yang akan diedit.");
				puts("Setelah itu, menginputkan Nama");
				puts("Tugas baru yang ingin diganti.");
				puts("Untuk Deadline, Anda akan diminta");
				puts("menginputkan Nama Tugas yang dicari");
				puts(", dan menginputkan tanggal, bulan,");
				puts("dan tahun dengan format penulisan");
				puts("DD/MM/YYYY. Contoh : 12/03/2021.");
				puts("Untuk Priority, diawali dengan");
				puts("menginputkan Nama Tugas yang dicari");
				puts(", kemudian menginputkan level");
				puts("priority yang ingin diganti. Ada 4");
				puts("tingkatan, yaitu:");
				puts("  1. Penting & Mendesak");
			    puts("  2. Tidak Penting & Mendesak");
			    puts("  3. Penting & Tidak Mendesak");
			    puts("  4. Tidak Penting & Tidak Mendesak");
			    puts("====================================");
			    system("pause");
				break;
			case 4:
				heading(4);
				puts("Lihat Semua Tugas berfungsi untuk");
				puts("melihat daftar tugas yang telah");
				puts("diinputkan sebelumnya.");
				puts("Menu ini terdapat 2 pilihan, yaitu");
				puts("Tampilkan semua tugas dan Lihat");
				puts("Spesifik.");
				puts("Tampilkan semua tugas akan");
				puts("menampilkan semua data tugas yang");
				puts("telah diinputkan secara berurutan");
				puts("dan masing-masing tugas terdiri");
				puts("atas Nama Tugas, Prioritas,");
				puts("Deadline, dan Sisa Waktu.");
				puts("Lihat Spesifik akan menampilkan");
				puts("daftar tugas berdasarkan Nama");
				puts("Tugas, kemudia akan menampilkan");
				puts("data tugas yang dipilih lebih");
				puts("rinci seperti Nama Tugas, Prioritas");
				puts(", Deadline, dan Sisa Waktu.");
				puts("====================================");
			    system("pause");
				break;
			case 5:
				heading(5);
				puts("Mark as Complete berfungsi untuk");
				puts("menandai atau menghapus data.");
				puts("Menu ini akan menampilkan daftar");
				puts("tugas yang terdiri atas Nama Tugas");
				puts(", Deadline, Prioritas, dan Sisa");
				puts("Waktu. Anda dapat menginputkan Nama");
				puts("Tugas yang diinginkan untuk ditandai/");
				puts("dihapus dalam daftar data.");
				puts("====================================");
			    system("pause");
				break;
			case 6:
				heading(6);
				puts("Exit berfungsi untuk mengakhiri");
				puts("program. Sebelum itu, program akan");
				puts("menampilkan data Nama dan NIM dari");
				puts("developer program ini.");
				puts("====================================");
			    system("pause");
				break;
			case 7:
				status=1;
				break;
			default:
				heading(0);
				puts("Maaf, pilihan menu tidak tersedia");
				puts("====================================");
			    system("pause");
		}
	}while(status!=1);
}

