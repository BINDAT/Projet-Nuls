import Chapitre_15_MyClass

SamuelRecord = Chapitre_15_MyClass.MyClass()
AnnieRecord = Chapitre_15_MyClass.MyClass("Annie", 44)

print(SamuelRecord.GetAge())
SamuelRecord.SetAge(33)

print(AnnieRecord.GetName())
AnnieRecord.SetName("Sophie")

print(SamuelRecord)
print(AnnieRecord)