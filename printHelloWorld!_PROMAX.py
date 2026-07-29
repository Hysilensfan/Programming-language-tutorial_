from sys import stdin as s


class Helloworld:
    def __init__(self):
        self.buffer = 65535
        self.write_down = ""
        self.local = "Hello World!"
        self.newline = "\n"
        self.carriage = "\0"
        self.array = []
        self.code = 0

    def start_the_codes(self):
        return None

    def int_main(self):
        pass

    def fgets(self):
        for line in s:
            line = line.strip("\n")
            if len(line) <= self.buffer:
                for y in line:
                    self.write_down += y
            else:
                self.code = 1
                k = f"main.c:6:5: warning: ‘fgets’ writing {len(line)} bytes into a region of size {self.buffer} overflows the destination [-Wstringop-overflow=]"
                self.print_import_info(k)
                return False
            break
        return True

    def carriage_rtn(self):
        return ""

    def reading(self):
        result = ""
        for c in self.local:
            self.array.append(c)
            result += c
        return result

    def printf(self):
        return print(self.reading() + self.carriage_rtn(), end=self.newline)

    def print_import_info(self, t):
        if self.code != 0:
            raise OverflowError(f"{t}")
        else:
            return None

    def return_code(self):
        exit(self.code)

# include <stdio.h>

if __name__ == "__main__":
    h = Helloworld()
    h.start_the_codes()
    h.int_main()
    try:
        if h.fgets():
            h.reading()
            h.printf()
    except OverflowError as e:
        raise e
    h.return_code()

"""
# include <stdio.h>

int main(){
    char o[65536];
    fgets(o,65536,stdin);
    printf("Hello World!\n");
    return 0;
}
"""
