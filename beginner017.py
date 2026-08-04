diretories: dict = {"/home/test": ["/flag", "none.txt"], "/home/test/flag": {"flag.txt": "hysilensfan{six_zeV@n~_}"}}

previous_one: dict = {"/flag": "/home/test/flag", ("..", "/home/test", "~"): "/home/test"}

now_diretory: str = list(diretories.keys())[0]
prompt: str = f"{now_diretory}@:~$"

while True:
    print(prompt, end="")
    ask = input()
    if "cat " == ask[:4]:
        if ask[4:] == "none.txt" and now_diretory == list(diretories.keys())[0]:
            print()
        elif ask[4:] == "flag.txt" and now_diretory == list(diretories.keys())[1]:
            print(diretories[now_diretory][ask[4:]])
            break
        else:
            print(f"bash:{ask[4:]} No such file or directory or command")
    elif "cd " == ask[:3]:
        if ask[3:] in previous_one:
            now_diretory = previous_one[ask[3:]]
        elif ask[3:] in list(previous_one.keys())[1]:
            now_diretory = "home/test"
        else:
            print(f"bash:{ask[3:]} No such file or directory or command")
    elif "ls" == ask[:3]:
        if now_diretory == list(diretories.keys())[0]:
            print(*diretories[now_diretory])
        elif now_diretory == list(diretories.keys())[1]:
            print(*diretories[now_diretory])
    else:
        print(f"bash:{ask} No such file or directory or command")
    prompt: str = f"{now_diretory}@:~$"
print(prompt, end="")
