//������ �������� � �����
int getRecommendation(char gender, float height, float weight)
{
	//������ ���� ��� ������ Male
	if ((gender == 'm') || (gender == 'M')) {
		if (height < (height - 100))
			return -1;	//��� ������������
		else if (height > (height - 100))
			return 1;	//��� ���������
		else
			return 0;	//��� �������
	}
	//������ ���� ��� ������ Female
	else if ((gender == 'W') || (gender == 'w')) {
		if (height < (height - 110))
			return -1;	//��� ������������
		else if (height > (height - 110))
			return 1;	//��� ���������
		else
			return 0;	//��� �������
	}
	
	else {
		return 10;
	}
}
