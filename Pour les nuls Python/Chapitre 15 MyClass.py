{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "id": "6a245a56",
   "metadata": {},
   "outputs": [],
   "source": [
    "class MyClass:\n",
    "    def __init__(self, Name=\"Samuel\", Age = 32):\n",
    "        self.Name = Name\n",
    "        self.Age = Age\n",
    "    \n",
    "    def GetName(self):\n",
    "        return self.Name\n",
    "    \n",
    "    def SetName(self, Name):\n",
    "        self.Name = Name\n",
    "    \n",
    "    def GetAge(self):\n",
    "        return self.Age\n",
    "    \n",
    "    def SetAge(self, Age):\n",
    "        self.Age = Age\n",
    "\n",
    "    def __str__(self):\n",
    "        return \"{0} est âgé(e) de {1} ans.\".format(self.Name, self.Age)"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": ".venv",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.2"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
