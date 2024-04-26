@tag12
Feature: Bla
  bla bla lba
  blibb

  Background:
    Given given
    And given a "string" and 'another'
    And with table
      | k  | v  |
      | 22 | 33 |
    And with docstring
      """json
      {
        "a": "b"
      }
      """

  @tag4 @tag6 @tag5
  Scenario: Bloo
    Given given
	# comment3
    When when 234
    Then then "sdgsdg"

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
