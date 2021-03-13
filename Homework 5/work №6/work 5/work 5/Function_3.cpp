namespace my_work {

	bool left_VS_right(int j, int jumpforce[])
	{
		for (int i = 0; i < j; i++)
		{
			int left = 0;

			int right = 0;

			for (int point = 0; point <= i; point++)
			{

				left = left + jumpforce[point];

			}

			for (int METKA = i + 1; METKA < j; METKA++)
			{

				right = right + jumpforce[METKA];


			}

			if (left == right)
			{
				return true;

			}




		}


		return false;
	}

}


