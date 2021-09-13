/*
������: �Ű���, ������, �Ѽ��� 
������: 2021.09
����: singahee1201@gmail.com 
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#define T 1
#define F 0

void start();
void place();
void house();
void bathroom();

void sink();
void bed();
void closet();
void desk();
void dool();
void toilet();
void bathtub();
void washstand();
void cabinet();
void door(); 

void computer_PW();
void door_PW();

int Find_BathroomKey = F;
int Bare_doolarm = F;
int Bare_doolleg = F;
int Find_ToiletKey = F;
int Bare_doolbody = F;
int Bare_doolhead = F;

int closet_count = 0;
int pw_count = 0;

void WaitForSeconds(float _seconds) {
	Sleep(_seconds * 1000);
} 

int main() {
	int place;
	start(); 
	int exit=1;
	while(exit) {
		printf("1) ���θ�\n");
		printf("2) ȭ���\n");
		printf("�̵��� ��Ҹ� ������ �ּ���: ");
		scanf("%d", &place);
		printf("\n");
		
		switch(place) {
			case 1:
				house();
				break;
			case 2:
				bathroom();
				break;
			default:
				printf("�ٽ� �Է��� �ּ���.\n\n");
				break;
		}
	}
}

void start() {
	system("cls");
	printf("����.. �Ӹ���..\n");
	WaitForSeconds(1.5f);
	printf("���� �����..?\n");
	WaitForSeconds(1.5f);
	printf("���θ��ΰ�?\n");
	WaitForSeconds(1.5f);
	printf("�ϴ� ������..\n\n");
	WaitForSeconds(2.0f);
	printf("(���ȴ���)\n");
	WaitForSeconds(1.5f);
	printf("���� ���� �� �����ݾ�?!\n");
	WaitForSeconds(1.5f);
	printf("���� �� �� �ִ� �� ã�ƾ߰ھ�.\n\n");
	WaitForSeconds(1.5f);
	system("pause");
	printf("\n");
}

void place() {
	int place_choice;

	printf("1) ���θ�\n");
	printf("2) ȭ���\n");
	printf("�̵��� ��Ҹ� ������ �ּ���: ");
	scanf("%d", &place_choice);
	printf("\n");

	switch(place_choice) {
		case 1:
			house();
			break;
		case 2:
			bathroom();
			break;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n"); 
			system("pause");
	}
}

void house() {
	int house_choice;
	
	system("cls");
	printf("[ ���θ� ]\n\n");
	printf("1) ��ũ��\n");
	printf("2) ħ��\n");
	printf("3) ����\n");
	printf("4) å��\n");
	printf("5) ����\n");
	printf("6) ���Թ�\n"); 
	printf("������ ������ ������ �ּ���: ");
	scanf("%d", &house_choice);
	printf("\n");
	
	switch(house_choice) {
		case 1:
			if(Find_BathroomKey) {
				printf("�� �̻� ������ ���� �ʴ´�.\n\n");
				system("pause");
			}
			else {
				sink();
			}
			break;
		case 2:
			bed();
			break;
		case 3:
			closet();
			break;
		case 4:
			desk();
			break;
		case 5:
			dool();
			break;
		case 6:
			door();
			break; 
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void sink() {
	int sink_choice, YvsN;
	
	system("cls");
	printf("[ ���θ� ] - [ ��ũ�� ]\n\n");
	printf("������� ���Ĺ��� �׿� �ִ�.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ���� ư��.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &sink_choice);
	printf("\n");
	
	switch(sink_choice) {
		case 1:
			printf("���� �������� �ʴ´�.\n");
			WaitForSeconds(1.5f);
			printf("�� ġ���? ������ ���ѵ�..\n\n");
			WaitForSeconds(1.5f);
			printf("1) ġ���.\n");
			printf("2) �� ġ���.\n");
			scanf("%d", &YvsN);
			printf("\n");
			
			if(YvsN == 1) {
				printf("[ ȭ��� ���� ȹ�� ]\n\n");
				Find_BathroomKey = T;
				return;
			}  
			else {
				return;
			}
			break;
		case 0: 
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void bed() {
	int bed_choice;
	
	system("cls");
	printf("[ ���θ� ] - [ ħ�� ]\n\n");
	printf("ħ�밡 ������ �� ���� ���� ��Ʈ���� ����.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ��Ʈ������ ����.\n");
	printf("2) ����� ���۸� �����.\n");
	printf("3) ħ�� ���� ����.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &bed_choice);
	printf("\n");
	
	switch(bed_choice) {
		case 1:
			printf("[ ������ �޸��� �߰� ]\n");
			WaitForSeconds(1.5f);
			printf("�޸����� '2020.10.25'��� �����ִ�.\n\n");
			break;
		case 2:
			printf("[ ���Թ� ��й�ȣ ȹ�� (0) ]\n\n");
			break;
		case 3:
			printf("������ �ʹ� ����. û�Ҹ� ���� �� �ž�..\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void closet() {
	int closet_choice;
	
	system("cls");
	printf("[ ���θ� ] - [ ���� ]\n\n");
	printf("���� ���� �׿��ִ�.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ���� �����Ѵ�.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &closet_choice);
	printf("\n");
	
	switch(closet_choice) {
		case 1:
		closet_count += 1;
			if(closet_count >= 5) {
				printf("������ �� ��� ��� �� ����.\n");
				WaitForSeconds(1.5f);
				printf("[ ���Թ� ��й�ȣ ȹ�� (1) ]\n\n");
			}
			else {
				printf("������ �������ϴ�.\n\n");
			}
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void desk() { 
	int desk_choice, PW_choice;

	system("cls");
	printf("[ ���θ� ] - [ å�� ]\n\n");
	printf("å�� ���� ��ǻ�Ϳ� ������ �ִ�.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ��ǻ�͸� �Ҵ�.\n");
	printf("2) ������ ����.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &desk_choice); 
	printf("\n");
	
	switch(desk_choice) {
		case 1:
			printf("�н����尡 �ɷ��ְ�, ȭ�鿡 '�ʼ�'�̶� �����ִ�.\n\n");
			WaitForSeconds(1.5f);
			printf("1) �н����带 �Է��Ѵ�.\n");
			printf("2) �н����带 �Է����� �ʴ´�.\n");
			scanf("%d", &PW_choice);
			printf("\n");
			
			if(PW_choice == 1) 
				computer_PW();
			else
				return;
			break;
		case 2:
			printf("���� �ڿ� 'PC: �Ű����Ѽ���'��� �����ִ�.\n");
			WaitForSeconds(1.5f);
			printf("Ȥ�� �̰� ��ǻ���� �н������ΰ�?\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void dool() {
	int dool_choice;
	
	system("cls");
	printf("[ ���θ� ] - [ ���� ]\n\n");
	printf("���� �����̴�.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ������ �Ӹ��� �и��Ѵ�.\n");
	printf("2) ������ ������ �и��Ѵ�.\n");
	printf("3) ������ ���� �и��Ѵ�.\n");
	printf("4) ������ �ٸ��� �и��Ѵ�.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� �������ּ���: ");
	scanf("%d", &dool_choice);
	printf("\n");
	
	switch(dool_choice) {
		case 1:
			printf("[ ���Թ� ��й�ȣ ȹ�� (1) ]\n\n");
			Bare_doolhead=T;
			break;
		case 2:
			printf("[ ���� ���� ȹ�� ]\n\n");
			Find_ToiletKey = T;
			Bare_doolbody=T;
			break;
		case 3:
			printf("�ƹ��͵� ����.\n\n");
			Bare_doolarm = T;
			break; 
		case 4:
			printf("�ƹ��͵� ����.\n\n");
			Bare_doolleg= T;
			break; 
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void door() {
	int door_choice;
	
	printf("���� ����ִ�.\n");
	WaitForSeconds(1.5f);
	printf("��ȣ�� �Է��ؾ� �Ѵ�.\n");
	WaitForSeconds(1.5f);
	printf("��� �޸����� ���� �����ִ�.\n\n");
	WaitForSeconds(1.5f);
	printf("���� �Ѽ��� �ּ������� �ؾ� �ϸ�, ��ȣ�� Ʋ���� ��������.\n");
	WaitForSeconds(1.5f);
	printf("1) ��й�ȣ�� �Է��Ѵ�.\n");
	printf("2) ��й�ȣ�� �Է����� �ʴ´�.\n");
	printf("�۾��� ���� �������ּ���: ");
	scanf("%d", &door_choice);
	printf("\n");
	
	switch(door_choice) {
		case 1:
			door_PW();
			break;
		case 2:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void bathroom() {
	int bathroom_choice;
	
	system("cls");
	if(Find_BathroomKey == 1) {
		printf("ȭ��� ���� ���ȴ�.\n\n");
		WaitForSeconds(1.5f);
		printf("1) ����\n");
		printf("2) �����\n");
		printf("3) ����\n");
		printf("4) ������\n");
		printf("������ ������ ������ �ּ���: ");
		scanf("%d", &bathroom_choice);
		printf("\n");
		
		switch(bathroom_choice) {
			case 1:
				if(Find_ToiletKey){
				toilet(); }
				else
				printf("�ڹ��谡 �ɷ��ִ�.\n\n");
				break;
			case 2:
				washstand();
				break;
			case 3:
				bathtub();
				break;
			case 4:
				cabinet();
				break;
			default:
				return;
		}
	}
	else {
		printf("�ڹ��谡 �ɷ��ִ�.\n");
		printf("������� ã�ƾ߰ڴ�.\n\n");
		return;
	}
}

void toilet() {
	int toilet_choice;
	
	system("cls");
	printf("[ ȭ��� ] - [ ���� ]\n\n");
	WaitForSeconds(1.5f);
	printf("1) ȭ����� ����Ѵ�.\n");
	printf("2) ���⸦ ���캻��.\n");
	printf("3) ���� ���� �Ѳ��� ����.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &toilet_choice);
	printf("\n");
	
	switch(toilet_choice) {
		case 1:
			printf("���� ��� �����ϴ�\n\n");
			break;
		case 2:
			printf("������ ������ ����.\n\n");
			break;
		case 3:
			printf("[ ���Թ� ��й�ȣ ȹ�� (2) ]\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void washstand() {
	int washstand_choice;
	
	system("cls");
	printf("[ ȭ��� ] - [ ����� ]\n\n");
	printf("����뿡 �Ӹ�ī���� �־� ���� �� ��������.\n\n");
	WaitForSeconds(1.5f);
	printf("1) �Ӹ�ī���� �����Ѵ�.\n");
	printf("2) ������� �����Ѵ�.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &washstand_choice);
	printf("\n");
	
	switch(washstand_choice) {
		case 1:
			printf("�׷��� ������ ���� �� ��������. ������� ���� �ֳ�?\n\n");
			WaitForSeconds(1.5f);
			break;
		case 2:
			printf("[ ������ �޸��� �߰� ]\n");
			WaitForSeconds(1.5f);
			printf("�޸����� 'D-day 37'�̶�� �����ִ�.\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}
		
void bathtub() {
	int bathtub_choice;
	
	system("cls");
	printf("[ ȭ��� ] - [ ���� ]\n\n");
	printf("���� ���� ���ִ�. ���� ������ �� ���� ��ð� ����� ���� �� ����.\n\n");
	WaitForSeconds(1.5f);
	printf("1) ������ ���� ��� ����.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &bathtub_choice);
	printf("\n");

	switch(bathtub_choice) {
		case 1:
			printf("�ٴڿ� �����̰� ����ɾ� �ִ�.\n");
			WaitForSeconds(1.5f);
			printf("�۾��� ���� ���� �˾ƺ� ���� ����.\n");
			printf("�����ؾ߰ڱ�..\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void cabinet() {
	int cabinet_choice;
	
	system("cls");
	printf("[ ȭ��� ] - [ ������ ]\n\n");
	printf("������ �̴� �������̴�.\n\n");
	WaitForSeconds(1.5f);
	printf("1) �������� �����Ѵ�.\n");
	printf("2) ������ �����Ѵ�.\n");
	printf("0) �ٸ� ���� �����Ѵ�.\n");
	printf("�۾��� ���� ������ �ּ���: ");
	scanf("%d", &cabinet_choice);
	printf("\n");
	
	switch(cabinet_choice) {
		case 1:
			printf("������ ���� ���ִ�.\n");
			WaitForSeconds(1.5f);
			printf("����� ���� ���� ���δ�.\n\n");
			break;
		case 2:
			printf("���� ��, �鵵�� ���� �۵���ϰ� ���� �ִ�.\n");
			WaitForSeconds(1.5f);
			printf("����� ���� ���� ���δ�.\n\n");
			break;
		case 0:
			return;
		default:
			printf("�ٽ� �Է��� �ּ���.\n\n");
			system("pause");
	}
}

void computer_PW() {
	char PW[7]="SGHHSH", PWinput[7];
	
	printf("�н����带 �Է��ϼ���: ");
	scanf("%s", &PWinput);
	printf("\n"); 
	
	if(!strcmp(PW,PWinput)) {
		printf("'��'�̶�� �۾��� ���Դ�. ������ �߱�..\n\n");
	}
	else
		printf("�н����尡 Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���.\n");
		return;	
}

void door_PW() {
	char  PW[5] = "1201", PWinput[5];
 	
	printf("�н����带 �Է��ϼ���: ");
	scanf("%s", &PWinput);
	printf("\n"); 
	
	if(!strcmp(PW, PWinput)) {
		if(pw_count >= 4) {
			printf("��ȸ�ҽǷ� Ż�� �Ұ�\n");
			printf("[ ���� ���� ]\n");
			exit(0);
		} 
		else if(pw_count >= 1) {
			printf("�� �տ� ��ġ���� ������ ���ִ�.\n");
			printf("[ ���� ���� ]\n");
			exit(0); 
		}
		else if(Bare_doolarm && Bare_doolleg && Bare_doolbody && Bare_doolhead) {
			printf("������ ������ �� �� �� ��.\n");
			printf("[ ���� ���� ]\n");
			exit(0);
		}
		else {
			printf("[ Ż�� ���� ]\n");
			exit(0);
		}
	}
	else {
		printf("��й�ȣ�� Ʋ�ȴ�.\n\\n");
		pw_count++;
	}
	return;
}

