 if (in == NULL){
        printf("Error Opening in put file!");
    }
    else{
        fprintf(out,"sum = %d\n Average = %f",sum,avg);
    }
        fclose(in);
    }
}