#!/bin/bash
os="$(uname -s | tr '[:upper:]' '[:lower:]')"

echo "Need admin permissions to install newer packages"

case "$os" in
        darwin)
                echo "OS DETECTED: $os"
                brew install ncurses
                ;;
        linux)
                echo "OS DETECTED: $os"
                sudo apt install -y libbsd-dev libncurses-dev
                ;;
        freebsd)
                echo "FreeBSD: nothing to install, libbsd/ncurses not needed"
                ;;
        *)
                echo "Unsupported OS: $os" >&2
                exit 1
                ;;
esac

cd "$HOME"/francinette || exit

git fetch origin
git reset --hard origin
git submodule update --init

# activate venv
. venv/bin/activate

echo "Updating python dependencies..."
# install requirements
if ! pip3 install --disable-pip-version-check -q -r requirements.txt ; then
	echo "Problem updating francinette. Contact me (fsoares- on slack)"
	exit 1
fi

echo -e "\033[1;37mFrancinette is updated. You can use it again!\033[0m"

printf "\033[33m... but don't forget, \033[1;37mpaco\033[0;33m is not a replacement for your own tests! \033[0m\n"
