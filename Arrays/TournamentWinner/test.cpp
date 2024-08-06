#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

// Test cases
TEST(TournamentWinnerTest, TestCase1) {
  vector<vector<string>> competitions = {{"HTML", "C#"}, {"C#", "Python"}, {"Python", "HTML"}};
  vector<int> results = {0, 0, 1};
  EXPECT_EQ(tournamentWinner(competitions, results), "Python");
}

TEST(TournamentWinnerTest, TestCase2) {
  vector<vector<string>> competitions = {{"HTML", "Java"}, {"Java", "Python"}, {"Python", "HTML"}};
  vector<int> results = {0, 1, 1};
  EXPECT_EQ(tournamentWinner(competitions, results), "Java");
}

TEST(TournamentWinnerTest, TestCase3) {
  vector<vector<string>> competitions = {
    {"HTML", "Java"}, {"Java", "Python"}, {"Python", "HTML"},
    {"C#", "Python"}, {"Java", "C#"}, {"C#", "HTML"}
  };
  vector<int> results = {0, 1, 1, 1, 0, 1};
  EXPECT_EQ(tournamentWinner(competitions, results), "C#");
}

TEST(TournamentWinnerTest, TestCase4) {
  vector<vector<string>> competitions = {
    {"HTML", "Java"}, {"Java", "Python"}, {"Python", "HTML"},
    {"C#", "Python"}, {"Java", "C#"}, {"C#", "HTML"},
    {"SQL", "C#"}, {"HTML", "SQL"}, {"SQL", "Python"},
    {"SQL", "Java"}
  };
  vector<int> results = {0, 1, 1, 1, 0, 1, 0, 1, 1, 0};
  EXPECT_EQ(tournamentWinner(competitions, results), "C#");
}

TEST(TournamentWinnerTest, TestCase5) {
  vector<vector<string>> competitions = {{"Bulls", "Eagles"}};
  vector<int> results = {1};
  EXPECT_EQ(tournamentWinner(competitions, results), "Bulls");
}

TEST(TournamentWinnerTest, TestCase6) {
  vector<vector<string>> competitions = {{"Bulls", "Eagles"}, {"Bulls", "Bears"}, {"Bears", "Eagles"}};
  vector<int> results = {0, 0, 0};
  EXPECT_EQ(tournamentWinner(competitions, results), "Eagles");
}

TEST(TournamentWinnerTest, TestCase7) {
  vector<vector<string>> competitions = {
    {"Bulls", "Eagles"}, {"Bulls", "Bears"}, {"Bulls", "Monkeys"},
    {"Eagles", "Bears"}, {"Eagles", "Monkeys"}, {"Bears", "Monkeys"}
  };
  vector<int> results = {1, 1, 1, 1, 1, 1};
  EXPECT_EQ(tournamentWinner(competitions, results), "Bulls");
}

TEST(TournamentWinnerTest, TestCase8) {
  vector<vector<string>> competitions = {
    {"AlgoMasters", "FrontPage Freebirds"}, {"Runtime Terror", "Static Startup"}, 
    {"WeC#", "Hypertext Assassins"}, {"AlgoMasters", "WeC#"}, 
    {"Static Startup", "Hypertext Assassins"}, {"Runtime Terror", "FrontPage Freebirds"}, 
    {"AlgoMasters", "Runtime Terror"}, {"Hypertext Assassins", "FrontPage Freebirds"}, 
    {"Static Startup", "WeC#"}, {"AlgoMasters", "Static Startup"}, 
    {"FrontPage Freebirds", "WeC#"}, {"Hypertext Assassins", "Runtime Terror"}, 
    {"AlgoMasters", "Hypertext Assassins"}, {"WeC#", "Runtime Terror"}, 
    {"FrontPage Freebirds", "Static Startup"}
  };
  vector<int> results = {1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
  EXPECT_EQ(tournamentWinner(competitions, results), "AlgoMasters");
}

TEST(TournamentWinnerTest, TestCase9) {
  vector<vector<string>> competitions = {
    {"HTML", "Java"}, {"Java", "Python"}, {"Python", "HTML"},
    {"C#", "Python"}, {"Java", "C#"}, {"C#", "HTML"},
    {"SQL", "C#"}, {"HTML", "SQL"}, {"SQL", "Python"},
    {"SQL", "Java"}
  };
  vector<int> results = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1};
  EXPECT_EQ(tournamentWinner(competitions, results), "SQL");
}

TEST(TournamentWinnerTest, TestCase10) {
  vector<vector<string>> competitions = {{"A", "B"}};
  vector<int> results = {0};
  EXPECT_EQ(tournamentWinner(competitions, results), "B");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
