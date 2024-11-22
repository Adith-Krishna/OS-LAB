{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyNxiHjplBkqgmSv0JUnUjho",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Adith-Krishna/OS-LAB/blob/main/simple%20calculator.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "AQ99gKiTsH_A"
      },
      "outputs": [],
      "source": [
        "#include <stdio.h>\n",
        "\n",
        "int main() {\n",
        "    char operator;\n",
        "    double num1, num2;\n",
        "\n",
        "    // Ask the user to enter an operator\n",
        "    printf(\"Enter an operator (+, -, *, /): \");\n",
        "    scanf(\" %c\", &operator);  // The space before %c is used to capture any leftover newline character from previous input\n",
        "\n",
        "    // Ask the user to enter two numbers\n",
        "    printf(\"Enter two numbers: \");\n",
        "    scanf(\"%lf %lf\", &num1, &num2);\n",
        "\n",
        "    // Perform the calculation based on the operator\n",
        "    switch (operator) {\n",
        "        case '+':\n",
        "            printf(\"%.2lf + %.2lf = %.2lf\\n\", num1, num2, num1 + num2);\n",
        "            break;\n",
        "        case '-':\n",
        "            printf(\"%.2lf - %.2lf = %.2lf\\n\", num1, num2, num1 - num2);\n",
        "            break;\n",
        "        case '*':\n",
        "            printf(\"%.2lf * %.2lf = %.2lf\\n\", num1, num2, num1 * num2);\n",
        "            break;\n",
        "        case '/':\n",
        "            // Check for division by zero\n",
        "            if (num2 != 0.0) {\n",
        "                printf(\"%.2lf / %.2lf = %.2lf\\n\", num1, num2, num1 / num2);\n",
        "            } else {\n",
        "                printf(\"Error! Division by zero.\\n\");\n",
        "            }\n",
        "            break;\n",
        "        default:\n",
        "            printf(\"Error! Invalid operator.\\n\");\n",
        "            break;\n",
        "    }\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ]
    }
  ]
}