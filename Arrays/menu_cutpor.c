	else if((tolower(p[i][0]))==(tolower(p[j][0])))
			{
			for(int k=0;(tolower(p[i][k]))==(tolower(p[j][k]));k++)
			{
				if(k<cols)
				if((tolower(p[i][k]))>(tolower(p[j][k])))
				{
					strncpy(temp,p[i],cols);
					strncpy(p[i],p[j],cols);
					strncpy(p[j],temp,cols);
					break;
				}
			}
			}

