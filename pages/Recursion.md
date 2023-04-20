- There are 3 steps to solve a problem using recursion
	- #### Base Case
		- Think of the simplest possible input for this function .
	- ### Find the relation
		- Think how the larger problem can be solved with the help of the solution of smaller problems
	- ### Generalise
		- Make a generalised function that solves the problem . Put this all together into a Mathematical function or a tree .
	- #### Apply recursion only if
		- when you are asked to find out multiple ways to do something or try out the best possible ways with some condition .
	- #### Shortcut for recursive problem
		- Try to represent the problem in terms of index .
		- Do all possible stuffs on that index acc to the problem statements .
		- Sum of all stuffs or count all ways , min of all the ways -> find min or max .
- Q. Print the sum of n natural Numbers ?
	- ![2022_06_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f6ba37626-410b-4e24-822f-3e7a56484ba52022_06_14_image.png?Expires=4808752813&Signature=iqHSAkSUpKyNt0E7lbIIjlowdW0hNzpXxTPR~3rFvC3wjkTZykV29GTAgFPiC4-ALohHDgIBabg5fY2FUwt5ATkDF1s6R8Mhs8DoDuZhRuALiof8DMFKl0kJwSGd1r0F6vc74jF-s2qji6BtZuC2GQvFCDHq95L9Y-p2DKlRe3t~2bc~wouWhgDhH4ooarcg4Z9WnxbY0pkLfLs7Au5r0VFGiQel60PEbUQm-n-15KgB2NRNKiaLk27nCMAO4DHKlOrTbs0mSWcwObkJXmdTDF5Gxo0CMzNjD5k4s8pJZfsSWd5gz~xXjTzXGwoG5rg1AOgYe5G8J5wQEO6-BWPreg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	-
	- Calculate Power ( Stack height \rarr n ) ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fb9a65df9-b89d-4d20-bc9e-c90e961afc0b2022_06_15_image.png?Expires=4808832971&Signature=cVFFY9tDglSayXuqUFp7y5mMzqOhKyMfoUJO4YFhiJvPCTMNhOUxOPBmUrZvzfdfTSjEKz6colOmdsK38ZKSKpPaNxwocMgyJG8s0yeR0l45nJ8GCeOIm-rInwxrBFENEVKQnsAlwm9qRjorlXwmM3UA1cgpwTzb~qSSqKt7SjzMElHJ3eQ12g-FemKaPVQbK5dW2rAmImcmtt5zJvc-iK~Kt6zKuCkrT8FvBVLLZmWDv8q8jH7KcZB8DBx5IbdA9PFhfUgEHwyGzQzo5uyf559RNQ9iXG156TVT7IkjdtGR4t-HeQO5-flge4rbMWq9SJGgKYIP0CCrGNGh0vDqCw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA){:height 243, :width 453}
	- Calculate Power ( Stack height -> logn)
		- ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f63723146-afdf-45e9-a29c-59b4b8aba3622022_06_15_image.png?Expires=4808833406&Signature=RJxhsX8gmL0i1sSYKtS8or5jb4Ck8Dln9dVcXa0o8W1fSDleyOkeBgoeQdOsxjoWxFlvbEfgxJVV2PevRMfxoIlv1pKboaFmvQqvpUHwVnqlOZtvKxGXt7Q~UJFdSM4tvmJppCOslHAKlWBSqUhQaORAv5zXZrUc7kuLPTa3cNKFdpZcb~DXZqQWO~ZZz79UAQhOR4aZMoCZN6PnG2j7v0kWmEAmA5~JeoS2G7QtisU2EIllcS6Tv7KE0mbuHIO~au2XlFKtnrMJ296pO~k1na~WHmwFnRMjRZJ2P0iFeDhyF9T2bUo9veuXfb255ZigOxbqUu9X6vumjoMJycjkSg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f221faa32-bb48-4ec9-89a3-2e94074ffe342022_06_15_image.png?Expires=4808833864&Signature=I9oTqVXuqzZbb8SHXt~ZD3W7J1ysrLca~Y2wfDYcIM-CzBb-dXVU8NVPHW~PiO8lTN~mH6n4nULePgPyQKT9p3uovYIlxLloxSp8Svg1-FcUfbZOhrOiPbBJOduvHsVZFL2DitokkrUJ8Le9KhnGeqHl6PnSWl7oqMbiahKJevDMEwxu8HdhO3c2OkYak63Ux~tCFvz2O8tq74vD6q14trUKAslEQW3fTA7PxelHmqzZRVCzzfTKGD7RtWpV6Q64F5UsqgMnCXl~2GX4SvbzO9M4LaI1RmOpFZ-JyqAhdOa~8fxFsuyb~a~E4NddWN1eAyuib9yEOq3q9pn6DbVVBA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		-
	- ### Tower of Hanoi
		- Tower which is empty that we can assume ^^Helper^^ , From where you want to transfer the disk that we can set as ^^Source^^ , Where you want to send the disk can be set as ^^Destination^^.
		- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f8af71b22-f364-48ff-b185-1f8e1b3a49262022_06_16_image.png?Expires=4808957083&Signature=EAbs5Xp---XENSd2L4TWVDB4JehCG9E6oZNHkpffblvpL2lR-YwJ00TJON51rw12DfExMspziigDd40Wcx7hg6ByIoUF-FhnY7bbXNbLn2KeWqyIZnqLk~pL83Q9Tv8u1ntK4gf7JwFDzJNEZdwAOAObJI5cBWZC~8rxpfpROkMnW4rd7pekmV48ckogDhTsKQTEjH6sPhzPgcz8ULyQlNKr0zZ196Bc6LXwl44uSBAMG9Xm1B2p~HfWcdpA730clKKRmugnQ0GkzwI6eapogQgBr3Jvb6y70q1X~SAwFuyG9i0pmbFFptNVZj--R4EaGOFZA5Gan6pUkrwTwbwtCA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- The Output for n = 3 is ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fd3303f72-910f-453e-b33b-8d5c3b0c57222022_06_16_image.png?Expires=4808957125&Signature=m1RoX5TsH8KGAkcwoGIcFBu2ZuU2G1b1VNIeeClvm7zelyUs0FvQQyCKUzk8qPh~kr1j9mRp8AjqVpp9fR052k7Rc2IyXABlzf8mAf1dZHzZ5b8szgmOGgu6erRs~SK-dHdMrq~TGnm41VEoX74mhLUuGmEdl1-~O9DrUk86QRXN13wD9SxrDf8zoWXeQdRrwg2hVu6xHOLntLLiQB~zeho9QCKzbw4D49OFiJZE0bLP9bPxKE9sXZRN3hoOiImAuwEcC5lCV2wXD8OLQlhDwolbbFPYhaxBSImnts2IXUWs7buypIiI07XEjEOMGqKCzWTL6~PUhnXZLgDA3r-XfQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		-
		- Time complexity -> O(2^n)
		-
	- Print a String in reverse
		- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f19f0378c-67a0-436c-b31a-f7a6e5f505952022_06_16_image.png?Expires=4808959770&Signature=kuVsdPDk1jFRfm9qm5VGbYHwRNdrfNZJt5flCVTyTSBdf0Ev8MTe8X0JuOQJgW05MqaSqO0va6EwPDrskpxNOW6Wu9sxIXXAx~dFhZQI5wPPUBomBPUsM8jpZqodcmlnfaynxMhacvhHaJpzvrOmfLOAPrBroAxPbWGZDjBGFo84QYMnQ0V9WV2foyzQRmh4RMeSK1-KCjvwUHVHClq99GZMkbCqVAwYpCTcwB4Y35SvPVHoNgF5rM-v4eSmCFxmxXHzfXsdgY8dL3mQXXu6B1nHmp6CA-fcdgFxnnFhJhKPL~uvqlTCjVcwOGuvlc3WwLG1~odxfcrD9gQVmmQrIQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		-
	- Find the 1st & last occurance of an element in string , In this first we need to declare two static variables in the class first and last
	- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fa4261789-7603-4d36-9cc7-73da012152c82022_06_16_image.png?Expires=4808960547&Signature=b6LiDjcym~JuxjxP-ZXFIpE5k2AeVWlyN7Ad9nSJWqyO6I5FGtalIA6KST4XVuIvGDjFppJobdIJC~PMzUBWo4YY1S7mVM6nls7lLfkxwx-JWaCfKGNlDuMvjohetUq-Ws1ZTcXaaivlomb4-bduFHCipUQ4OaKX72ZFkS2DlcDKguWLfPZIVSXvg1GOtZNkZ9BMKFT~cZTB9IaEkqlLW~lzHMfZZlzMlrEiNP1IATLZDovprMnX4WKfTwRgsaFN3srlXFcTfrcXE209zM1g5q48tz4oJdNpoKzK0aj8uWxe9nkw00jT0-6qA9A1KWRNYPVPqDhKNVfISfmkZwfW2w__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(n)
	-
- Array Strictly increasing using recursion
	- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f49b4e264-490d-4e4f-9dca-58b3e6a26c252022_06_16_image.png?Expires=4808967298&Signature=dU6sqxuABydg07CCAhS2ttMeUpCQl5ui0Pb3xgObenyyDPFeUVYy01UiQeWonpJ73sIDFbh7cDiJ12KCTv~DZcc3xhuOYm7z3j61zg1Vfk1VyML2I9aEAHXjJBobrLVf05VxcJGdK0jVe3d7~9ATBPVC6TcJhlsn9uPSdGcQ0v3MU~wR1p2lB1zEZewSciiJyF4QO95g2im~NSo0OFzbdTVVU6jD1yJQIM8nrAd~IW0jblIi9M-iqGwXuieUsaU8dtJJERrGYVZMPvMvcXynjOodeV1d6jzkeBa8tvtjZa0ckpy449BXBTom4NnU9cRLeJhjLFiYpsSRy8cfoTdieg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(n)
	-
- Move All 'x' to the end of the string
	- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ff82279c3-8df1-4f6b-bff6-ccd21e6d49572022_06_16_image.png?Expires=4808968527&Signature=PCMu188MckxlbhdApKc6u2YcUKiUiRCklKbht1uRS97yzmswe6hQgDy8DCKcyFfOb4QBXA8xzw8YjNH1lA-v7IwIBwPzUufDfLRvfz6sNl8VZrue1xTEQnsRlT9rp3zFDAio2KQPPrkzkcOjuAp-JiEjfYx4aLnmSkzscbhtRIqqficX2aVKBUy6bbqX7Im6cSB5FpR71my4u8IMV0iyW~xQJqMsKU06hJbzl4a2hbZToF4pk4MPgc21mMzRAGLA8JhvKkvm7HC9Gu8yOnxKXvKKBot68J~zdcqRW88sPZdR9PeRh0W1s9Vdn2IgeHPCLpEWt9ZQkOzklOTEErlCCw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(n)
- Remove Duplicates
	- In this problem we take a static boolean array of size 26 which tells weather the character is duplicate or not . ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0e8f5dd4-eae7-4e10-9440-7940674bce642022_06_16_image.png?Expires=4808969662&Signature=DnyNrtNwEuf1DSBSOU~dOJ2tSdruA6MLOuIKO2BJNXAlM3yaqBhT33z4OMx5tWD61YKi8q9Gu0L94zLCR~gHU0~ICr~EJF2utCQMaGNuniQEA2Wda~695c2JfbVoNtH~YWDXmODWk7zi~zwccrCSaQwPlhI09vlO4VY8lsM~QLJhXjr0i4A0EPZxxb0apBNJSQgc3lCvcxNev8UYGo2qK-MprGfjqIn2CtJ0b0~CgOi7uKl0K4F33EJmhExVeJOLGxF~rQYL0QOw8r0ntHObGL6Bxlv~h82MjmIYcVqRitZDWV3iRDE-RaaF9F4mnAbo7X15om0i513Dsu17OpqoEw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(n)
- Sub Sequences
	- we make two recursive calls , first is with the current string and other is without the current string ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ffed56249-6191-4b45-b6d0-5ceef61b19d42022_06_16_image.png?Expires=4808973861&Signature=lOmP4IG5OTPRqFWqELxPUM9T8w5WB5CV5tFVo4ZZxskt7SB5x0ZcWfFEncpJuDUvmC3s1T7OVvOztFixGOn9~k3mRFD0oiKo3798aaIu5Qhdm-BnY7U9vGL0W2gIZJGKzi6pntE05nqHZe4Zd2weBofDtW0C0QONnaU1yFOZyO4vNKD~efzRBGmVAhDXAdsIXtQaZUte3NvMG2YgOJliOKTu7cSxhKtBTmzA11dwNik~lRGm6TrZhOGyyFNXziB~8KYM4ZMckgiZvKvIazi06Hy-gM~X1CHhnBzCdnvIiFkdQKbtqbIIvf-vMvh8ZuDEoafJvpWMCFLnsCB2S3A9GQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(2^n)
- Print Keypad combination
	- First we take an array of strings of the string present in the keypad
	- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f1076c481-a975-439d-a974-8fb1f97341432022_06_16_image.png?Expires=4808978393&Signature=mAslrt6eL7JXq1dqeyCKl-MCFYk5oldlG0uc~0ng4ao5CdCyI1wDjy6IiNQCHFqwD0YxCIDIwvNFNEDNECLcpHwDD5pctrfb~D0cBpjVEf-e2FY0UXjf-jKlINzZh9~tPL-Tmk8BbEdl034FOXP0nyUt5SU7IJ~SF~va~OCDe~ITMiwOPLmQYdQAovsVzoUuq~2TL~Vc8Ei6sZxPYLuviyzMPfmd~mtUVtthrdL440Vysax9nsAB4l8fgfGbyLbtj~wiyZjLbEhjVhXP~xkX31Vc6v~UqsD8c3T1ztQe2b~XKs0vztAPA-eiTbi8GwgXLM6kFmN-HeThqjVFJaL88Q__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Time complexity -> O(4^n)
	-
- Print Permutations
	- If n is the length of the string then the number of permutations will be n! [12:00](https://www.youtube.com/watch?v=xZykmhcWGuY)
	- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f66077d2b-3e90-47c0-b664-cac70da5adf12022_06_18_image.png?Expires=4809098075&Signature=hW0-Ks6LVmHSFgJi~9CFENHYz5UnTUUBdsbYfg5wbLR8JUldLELQ37Lpcy7Ut9Ku5O8iuWCHIpgsPSyOOo9Qi51WapZw9iCHtzuMXmkS2ntHwQXRJm9muKcLjDy-DKcNTy7dISgApgiZXkkxW7J26V527LFeB~VYbubIfBQ~ocqfF2p4RCIPSamuWfaGaKQ7-r-4mR3Y7Zexk20FoJ9otyP1jua2eyEWdY0GIN-l84kYewWLPE~e39KxSQ0Gq8kVrPQrcmdf-Ohk-qvBx3Hyfh-uHf9kukCWFpZeyS2rpYBrt79eTpULamxzQFMvvOY3DbOMJrS9bHWUNl5ZA29ZhQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	-
- Maze Problem
	- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f3c17714a-3d6c-4f11-a2d9-58a2dc75a13c2022_06_18_image.png?Expires=4809132448&Signature=eGDOOsG3AORtSVKBUw4bZ~L379vY~VWhp~c-WmpxnsK~GfzCJldFf44O1nSJLlbrnbQ1bQHLqsilKkIKPxHtBuJRlTLAtIs3R4DVDDr9UHgDZbpeWbE03dpwIET03FEubw5xW6Odt4ZdFBYehDqasHHDJ2YTfCTlY6stEfpX5JQHVhpk-RVqf~E08f8SHVSlNXEJWvFZ60U3f5LlbsioztySyhbrFqFYqsxGBPFjBlYyhxba1YEy~VWgENoHlFY4zQz~8ohpqWTRCwqP-KQrwHArkuAUs525TNwY8nb7vIcADatZw7rG7nWlT-wx-4AstCCdSkAGeyos~BjVB7hUGQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	-
- Tilling Problem
	- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0b5575ba-3301-4a76-afb8-4dd4505bbfbd2022_06_18_image.png?Expires=4809137216&Signature=AyMuRqj5652GjIaHPudhtOOBTXZx9hxfwj4JTyC2pTMiaYJjer8Rur3t73SDW59B~t597jybA8zH4038VOU~dt7RwFB04vlP7zpcDEmxBgKVqLE85QrGjmXa9hYpRN1ROoqspLMiZFnijZymuTKI7lRvk1qFgJW-OkvSt1QO7yBF4OSbpkALqq3JDe-B~avo-BzXETzAknGQwIbxUqYKZfZJTCPbX3OAKc2HCZhKlpf1WVLeMXLjbqtubwQWrRE0facAzqD5aCawO17a-AYerPa7Pou54RL-0ACTuqw7WYaIh5bS7~Y98htaz8nx5B1xPo3ROgiulqpS6REa85MmOw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Q place the tiles of size of 1*m in a floor of size n*m ?
- Sets using recursion
	- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fccabdb54-3346-4d4d-aeb1-63380d0b9fb32022_06_18_image.png?Expires=4809164336&Signature=g5PelILz5AGz-swos4LubOx7poSRXLWVtgiLv0IxBUd2xXg~qHfmAKJEvg5eNkqZKJK5~LAFhn6Acql50zg2AtdBOc0sUJREibKba-1lSB9zm4NqJCW230IpFTf2c9Or~PCgFTnYdgsU~1ulkFZHTNg8rHpw~TsjSNuNcE9o8hS2dLBVtEqI0ehPNxQhI1NNpnkLO914s~RF1KhGRFTsSGhfSEagRcB8-mL1Z3sbv~Ie5OEIqoMfvHamfhJrHcD4UL0A1FWsvkbhXyl4Jqtt3ObaHy7yhkJQLoZObOrATfwA77WhLa-uDJ1SJY-cn-0dN8mXnVFit525p6Zjh8rVuQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA){:height 163, :width 675}
	-
- Rectangle Area
	- ![2022_06_19_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f47de08ea-9cb4-4647-974b-094641ddf1942022_06_19_image.png?Expires=4809215030&Signature=FLe7879mgY0qHsrzYarAbdMVRTxJWHK4rAuXwU9U5JlN2rjEZnaAHO2nsaoimHh~Sce8Fs2-UTfWm90Lh2o0jMsxEwJ5t-eCsd2xQ0u63-PLQ6DtBxANnpBYShiSaVC8zaQAiRVNQCY5Y0jJ0FS2Lq~-J3NyzzI1r-BMLQe4BFVGT34yCa4eB~1NHF3SDBROxK4IKXi7WfRgNCp6igMqw2QrNbnRM6RL~HIqlNNIWaTC7RUPlHvnyFSDzFz8TtaCovYL1GMPDyE1Fg5XW6Di4I5FGd4Nfzg5CDBwZYzE7yNDmu~ZdO-pmGYATWwy0mFmKXaSZojn6Zroz7tMObqbDQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- #+BEGIN_CAUTION
	  in the above Question why max is taken not able to understand Why max and minimum is taken when calculating overlapped area  [Question](https://leetcode.com/problems/rectangle-area/submissions/) 
	  #+END_CAUTION
- #### Recurrence Relation
	- It is the relationship between the result of a problem and the result of its Sub-problems.
	- **Pascal's Triangle : **
		- Pascal's triangle are a series of numbers arranged in the shape of triangle. In Pascal's triangle, the leftmost and the rightmost numbers of each row are always 1. For the rest, each number is the sum of the two numbers directly above it in the previous row.
		- Approach : 
		  1. First we will create a 2d vector , a prev vector initialized wiith 1 and then we will push the prev vector into the 2d vector .
		  2. Make a for loop from  2 to the rowIndex given , Again create a temp vector initialize the initial position of the temp vector with 1 and then loop from 1 to i th position we will just calculate the sum of the previous elements and store it in the temp . 
		  3. At last we will push temp to the 2d  vector and return it . 
		  Code :
		  ```
		  vector<int> getRow(int rowIndex) {
		          vector<vector<int>> ans ;
		          vector<int> prev = {1};
		          ans.push_back(prev);
		          for(int i = 2 ; i<=rowIndex + 1 ; i++){
		              vector<int> temp(i);
		              temp[0] = temp[i-1] = 1;
		              for(int j = 1 ; j<i-1 ; j++){
		                  temp[j] = prev[j-1] + prev[j];
		              }
		              prev = temp;
		          }
		          return prev;
		      }
		  ```
- [[Memoization]]