import * as path from 'path';
import { generateTheme, IColorSet } from 'vscode-theme-generator';

const themeName = 'Generated';
const colors = {
  black: '#222731',
  white: '#C0C5CE',
  blue: '#5196C6',
  red: '#C9538C',
  green: '#679C76',
  yellow: '#EBCB8B'
}

const colorSet: IColorSet = {
  base: {
    background: colors.black,
    foreground: colors.white,
    color1: colors.blue,
    color2: colors.red,
    color3: colors.green,
    color4: colors.yellow
  }
};

generateTheme(themeName, colorSet, path.join(__dirname, 'theme.json'));
