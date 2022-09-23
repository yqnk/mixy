# Mixy

## Introduction

It mixes all the letters in the words of a text but you can still read it because the brain is incredibly well made.

## Getting Started

(Windows OS is currently not supported).

### Prerequisites

- make (obviously)
- gcc (no idea of which version, let's just say it will always work)

### Base

    $ git clone https://github.com/yqnk/mixy.git

### Installation

Should be in the repo, then:
    
    $ make install

### Uninstall

Should be in the repo, then:

    $ make uninstall

### Other
 
You can:

    $ make default

If you want to build just the main output file without installing it.

### Usage

#### Help
    
    $ mixy --help
    $ mixy -h

#### Do actually something

    # mixy -t "text to mix"
    # mixy --target "text to mix"

## License

Yes.