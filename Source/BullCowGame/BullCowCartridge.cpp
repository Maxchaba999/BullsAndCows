// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

  

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine (TEXT("Welcome to Bulls and Cows!!!"));
    PrintLine (TEXT("Guess the 4 letter word!")); // magic number remove!
    PrintLine (TEXT("Press enter to continue..."));

   SetupGame();//Setting Up Game
    

    //prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
        
        
         



    //checking PlayerGuess
   
    if (Input == HiddenWord)
    {
        PrintLine (TEXT("Yes,you are right!"));
    }
    else
    {   
        if (Input.Len() != HiddenWord.Len())
        {
           PrintLine(TEXT("The HiddenWord is 4 characters long, try again!"));//Magic number
        }
        
        PrintLine (TEXT("please, repeat!"));
        
    }
    
    //check If Isogram
    //Prompt to guess again
    //check Right Number Of Characters
    //Prompt to guess again

    //Remove lives

    //check if lives >0 
    // IF yes guessAgain
    //Show new lives Left
    //IF no show GameOver and HiddenWord?
    //PromptPlay Again, press Enter to play Again?
    //check user input
    //Play Again
} 

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake"); //set the  hiddenword
    
    Lives = 4;//set Lives
}