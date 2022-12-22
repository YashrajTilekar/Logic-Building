import numpy as np
import pandas as pd
from sklearn import preprocessing
from sklearn.neighbors import KNeighborsClassifier

def PlayPredictor(data_path):
    data = pd.read_csv(data_path ,index_col= 0)

    print("Size of Actual Dataset : " ,len(data))
    print()
    print()

    feature_names = ['Weather' ,'Temperature']

    print("Names of Features : ",feature_names )
    print()
    print()

    weather = data.Whether
    temperature = data.Temperature
    play = data.Play

    le = preprocessing.LabelEncoder()

    weather_encoded = le.fit_transform(weather)
    print("Weather Encoded")
    print(weather_encoded)
    print()
    print()

    temp_encoded = le.fit_transform(temperature)
    label = le.fit_transform(play)

    print("Temperature Encoded")
    print(temp_encoded)
    print()
    print()

    features = list(zip(weather_encoded ,temp_encoded))

    model = KNeighborsClassifier(n_neighbors= 3)

    model.fit(features , label)

    predicted = model.predict([[0 ,2]])
    
    for Cnt in range(0 ,len(predicted) ,1):
        if(predicted[Cnt] == 1):
            print("Play")
        else:
            print("No Play")

    #Sunny : 2
    #Overcast : 0
    #Rainy : 1

    #Hot : 1
    #Mild : 2
    #Cool : 0


def main():
    print("Machine Learning Application")
    print("Play-Predictor using KNN Agorithm")

    PlayPredictor("PlayPredictor.csv")


if(__name__ == "__main__"):
    main()