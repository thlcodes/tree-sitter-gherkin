# comment1
@tag1
Feature: Bla

  # comment2
  @tag2 @tag3
  Background: bliii
    Given given
    And given2

  @tag4
  @tag6 @tag5
  Scenario: Bloo
    Given given
	  # comment3
	  When when 234
	  Then then "bla"

  Scenario Outline: Blaaa
    Given given <abc> and
	  When when <def> and
	  Then then <ghi> etc.

	  Examples:
	    | a | b |
	    | 1 | 2 |
	    | 3 | 4 |

  Scenario: Last
    Then end