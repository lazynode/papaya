# papaya

lazynode evm compiler

## dependencies

```sh
sudo apt update
sudo apt install nodejs npm
sudo apt install g++
sudo apt install libjsoncpp-dev
npm install
```

## compile

write smart contacts in cpp files and run `make`:

> **ALL WARNING MESSAGES SHOULD BE CAREFULLY REVIEWED**

## language

write code in cpp files since papaya compilation depends on g++

> c++ is a powerful static type language; g++ is the lexical and syntactic analyzer and grammer checker of papaya;

choose any of the supported language packs as you want to implement your smart contract:

> using multiple language packs together is also supported

- [assembly](https://github.com/lazynode/papaya/tree/assembly-examples): assembly language with smart push, tag and jump ... support
- [basic](https://github.com/lazynode/papaya/tree/basic-examples): high level language as efficient as assembly
- cando: TODO
