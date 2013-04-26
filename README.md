robogen-3DPrint
===============
Part of the Robogen Course project, LIS Laboratory, EPFL.

By Gregoire Heitz <gregoire.heitz@epfl.ch>, April 26th, 2013.

The aim of this part is to give student a fully automatize process to produce files required by the 3D printer of each Parametric Part : passiveWheels, activeWheg and parametricBrick.

It Contains scripts to set the parametric part of your robots according to values given by the Evolutionnary Algorithm, and then produces the STL files to print them.

- The first part describes the structure of the folder robogen-3DPrint.
- Then, It explains how to install FreeCAD software.
- Finally it explains how to produce the STL files required for 3D printing the different part with the replicator 2 3D Printer.

-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------

Structure of robogen-3DPrint folder :

This folder contains 3 sub-folders :
- FreeCAD_Modules : where the scirpt to call the given parametric Part with the specific parameter will be produced.
- STL_Files : where the STL files will be exported
- utils : where the python scripts needed to design the parametric Part are.

This folder also contains files :
- Example_finalBestInd_GP.txt file which is an example of what the Evolutionary Algorithm produces. It gives the Best body and Brain that you reach running the Evolutionary simulator.
- getParametricValue_LINUX.bat (which works for MAC to) and getParametricValue_WINDOWS.bat script to parse YOUR finalBestInd_GP.txt file.

-------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------

How to install FreeCAD :

- First go to http://sourceforge.net/projects/free-cad/
And Download the FreeCAD software. 
It as a cross-Platform, open source software to design 2D and 3D models.
It has a python interpreter integrated. 
We will use this capability to design each parametric parts required, by simply executing those scripts in FreeCAD.

-------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------

What to do :

- Copy paste YOUR finalBestInd_GP.txt file, that has been generated by the Evolutionary simulator, in robogen-3DPrint folder.
- Then open a terminal and go to the robogen-3DPrint folder. From there execute the batch script corresponding to your platform : either Windows either Linux-MAC.
It will produce a Readme.txt file where you can see how many Parametric parts should be generated.
It will also generate one python script per Parametric part in the FreeCAD_Modules folder.

- Finally : Open FreeCAD software.
- Open from FreeCAD all Call*.py scripts, located in FreeCAD-Modules folder, and run each of them separately.
For a certain reason, that I did not fully understood yet, the wheel is quite long to generate from FreeCAD, about 3min, so please let the software run by it self, and simply be patient.
You should check the bottom left window : called : "report view". To check that no errors occured.
If any occured please post in the issue part of this github repository so I can see what is going on, and try to support you.
- Those scripts will export STL files in the STL_Files folder.
You will have to open them to be sure that they look corretc or at least similar to what was in the physics simulator.

-------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------

As it is the first year that we developped this robogen project course, it is possible that you encounter some issues. I will do my Best to help you solving it. So please, feel free to ask questions.
And I hope that you will enjoy it.

Gregoire Heitz, <gregoire.heitz@epfl.ch>, April 26th 2013.
