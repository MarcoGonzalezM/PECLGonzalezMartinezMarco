##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PECLGonzalezMartinezMarco
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/ArchivosCodelite/ArchivosCodelite
ProjectPath            :=C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco
IntermediateDirectory  :=../build-$(ConfigurationName)/PECLGonzalezMartinezMarco
OutDir                 :=../build-$(ConfigurationName)/PECLGonzalezMartinezMarco
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=marco
Date                   :=23/11/2021
CodeLitePath           :=C:/CodeLite
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\CodeLite
Objects0=../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco" mkdir "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco" mkdir "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/.d:
	@if not exist "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco" mkdir "..\build-$(ConfigurationName)\PECLGonzalezMartinezMarco"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(ObjectSuffix): Paciente.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/Paciente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Paciente.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(DependSuffix): Paciente.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(DependSuffix) -MM Paciente.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(PreprocessSuffix): Paciente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Paciente.cpp$(PreprocessSuffix) Paciente.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(ObjectSuffix): Controlador.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/Controlador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Controlador.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(DependSuffix): Controlador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(DependSuffix) -MM Controlador.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(PreprocessSuffix): Controlador.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Controlador.cpp$(PreprocessSuffix) Controlador.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(ObjectSuffix): Lista.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(DependSuffix): Lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(DependSuffix) -MM Lista.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Lista.cpp$(PreprocessSuffix) Lista.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(ObjectSuffix): Pila.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(DependSuffix) -MM Pila.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Pila.cpp$(PreprocessSuffix) Pila.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(ObjectSuffix): Cola.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(DependSuffix) -MM Cola.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/Cola.cpp$(PreprocessSuffix) Cola.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(DependSuffix): NodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(DependSuffix) -MM NodoLista.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ArchivosCodelite/ArchivosCodelite/PECLGonzalezMartinezMarco/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(DependSuffix): NodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(DependSuffix) -MM NodoPila.cpp

../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp


-include ../build-$(ConfigurationName)/PECLGonzalezMartinezMarco//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


