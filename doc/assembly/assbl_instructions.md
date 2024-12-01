# OSHOP Electronics Testing Module (OSH Demonstrator) Assembly Instructions



[TOC]


## Assembly Module Structure

[bom sts](worktree\development_osh\src\mech\structure-system_sts\sts_bom.pdf)

- remark: the module structure is assembled by using aluminium profiles and dedicated automatic connectors
- the first picture shows one of this connectors integrated in the assembly points
- points where new connectors must be added are marked with red dots in the pictures
- keep in mind to first insert the screws in the slot, because this is not possible after assembling the other components of the automatic connector

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step0.png)

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step1.png)

- Assemble group A by joining the two 20x20 profiles

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step2.png)

- Merge group A to a 20x40 profile to obtain group B+A

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step3.png)

- Assemble group C by joining the 3 profiles shown in the picture above

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step4.png)

- Merge group C to a 20x20 profile (length 600 mm) to obtain group D+C

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step5.png)

- Connect group D+C and group B+A using 3 20x20 profiles (length 230 mm)
- Set up the spacing between the profiles like illustrated in the picture

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step6.png)

- Add 2x 20x20 profiles (length 250 mm) to achieve better stiffness

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/structure-system_sts/sts_step7.png)

-Add 4x brackets for connection with the mechanical interface later on

## Assembly Linear Guide

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/linear-guiding-system_lgs/lgs_step1.png)

- full assembly of available open builds parts store guiding system should look like this
- link to store: https://us.openbuilds.com/c-beam-linear-actuator-bundle/

![TCS Assembly Step 1](worktree/development_osh/doc/assembly/linear-guiding-system_lgs/lgs_step2.png)

- remove the spindle, bearings etc.
- replace the topplate with `guiding-piston-plate_lgs` and screw in the piston
- connect the piston rod with the sledge
- keep in mind to utilize piston with sufficient piston stroke

## Assembly Tool Changing System

[bom tcs](worktree\development_osh\src\mech\tool-changer-system_tcs\tcs__bom.pdf)

![TCS Assembly Step 1](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step1.png)

- Insert `head-shaft_tcs` into `baseplate_tcs` and tightening with 3x socket button head ISO 7380 m3x6 screws

![TCS Assembly Step 2](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step2.png)

- Secure the piston adapter
- We used the accessory components to FESTO `ADVL 10-10 APA` and 4x socket head screws ISO 4762 m4x6.

![TCS Assembly Step 3](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step3.png)

- Insert a heated m4 thread insert into `piston-head_tcs` (we used a soldering iron to heat the insert)
- Join `piston-mount-b_tcs` and the piston by using 2x socket head cap DIN 4762 m3x36 screws and 2x hex nut ISO 4032 m3
- We used FESTO `ADVL 10-10 APA` piston

![TCS Assembly Step 4](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step4.png)

- Tightening the piston head to the shaft of the piston

![TCS Assembly Step 5](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step5.png)

- Join the piston adapter and `piston-mount-b_tcs`
- Secure with the piston mount shaft

![TCS Assembly Step 6](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step6.png)

- Add circlip for shafts DIN 471 6x0p7 on each side to secure the piston mount shaft
- Insert a socket head cap screw DIN 4762 m5x30 into the `piston_head_tcs`

![TCS Assembly Step 7](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step7.png)

- Insert 4x heated m3 thread inserts into the `baseplate_tcs` (for example by using a soldering iron)
- This step is optional 
- Only do this assembly if you plan to cover the TCS actuation mechanism using the `cover_tcs`

![TCS Assembly Step 8](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step8.png)

- Insert 1x m5 thread insert into the `lockplate_tcs` (for example by using a soldering iron)
- Press the radial ball bearing DIN 625-608 into the `lockplate_tcs`

![TCS Assembly Step 9](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step9.png)

- Press 6x countersunk magnet into the `lockplate_tcs`
- Optional step (recommended): Secure the countersunk magnets with 6x socket countersunk head screw DIN 7991 m3x8

![TCS Assembly Step 10](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step10.png)

- Fit the bearing assembled to the `lockplate_tcs` on the `head-shaft_tcs`
- Connect the piston and the `lockplate_tcs` by screwing in the socket head cap screw DIN 4762 m5x30

![TCS Assembly Step 11](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step11.png)

- Tightening the signal connect side A to the `head-plate_tcs` using 2x hex socket countersunk flat head DIN 7991 m2.5x6 screws
- Put the 3x conical magnets in the countersunk located at the bottom side of the `head-plate_tcs`

![TCS Assembly Step 12](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step12.png)

- Mount the `head-plate_tcs` to the `head-base_tcs` using 3x socket countersunk head screw DIN 7991 m3x8
- Recommendation: Slide the `head-plate_tcs` on the `head-base_tcs` (sideways) in order to avoid dropping the inserted conical magnets
![TCS Assembly Step 13](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step13.png)

- Attach the previous assembled parts to the `baseplate_tcs` using 2x socket countersunk head screws DIN 7991 m3x30
- Recommendation: Apply grease to the contact surfaces between the `lockplate_tcs` and the `head-base_tcs`

![TCS Assembly Step 14](worktree/development_osh/src/doc/assembly/tool-changer_system_tcs/tcs_step14.png)

-Secure the changer head from the opposite site by screwing in 2x socket button head screw ISO 7380 m3x10

## Assembly Tool Storage System

[bom tss](worktree\development_osh\src\mech\tool-storage-system_tss\tss_bom.pdf)

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step1.png)

- Attach the piston to the `storage-body-a_tss` using 4x socket head cap screw DIN 472 m4x20
- The pneumatic connectors of the piston shall point in the illustrated direction
- We used FESTO `ADN 16-20 APA` piston

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step2.png)

- Slide the `storage-body-b_tss` on the L-shaped connectors of `storage-body-a_tss`

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step3.png)

- Tightening the `spacer_tss` on the thread of the piston rod
- Avoid spinning of the rod by holding it with a pliers like shown in the next picture to avoid 

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step3-1.png)


![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step4.png)

- Secure the `spacer_tss` with 4x socket countersunk head screws DIN 7991 m3x8

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step5.png)

- Attach the adapter of the rotational piston to the `spacer_tss` by screwing in 4x socket button head screws ISO 7380 m3x6
- We used the piston FESTO `DRVS 12 180P` and the coresponding acessories

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step6.png)

- Insert 2x hex thin nut ISO 4036 m8 in the `mounting_tss`
- Put the rotational piston and the `sensor_flange_tss` in place

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step7.png)

- Secure the rotational piston and the `sensor_flange_tss` using 3x socket head cap screw DIN 4762 m4x20

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step8.png)

- Screw the two inductive sensor m8 into the assemble hex nuts and secure them with another set of hex thin nut ISO 4036 m8

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step9.png)

- Add the inductive tool sensor to the `sensor_flange_tss` using a socket head cap screw DIN 4762 m3x12 and a hex nut ISO 4032 m3

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step10.png)

- Assemble the counterpart of the tool inductive sensor by joining a plain washer type ab DIN 6903 m4 using a socket countersunk head screw DIN 7991 m3x8

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step11.png)

- Put the piston adapter on the rotational piston rod

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/tool-storage-system_tss/tss_step12.png)

- Secure the adapter using 2x allen screws DIN 913 m4x6

## Assembly Chang-E

[bom Chang-E](worktree\development_osh\src\mech\Chang-E_bom.pdf)

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/Chang-E/chang-e_step1.png)

- Join the linear guiding system and the structure e.g. by using slot nuts, brackets and matching screws
- choose sufficient spacing between the bottom plane of the structure and the bottom of the linear guide, in order to reach target operation position with the tools later on


![TSS Assembly Step 1](worktree/development_osh/doc/assembly/Chang-E/chang-e_step2.png)

- Mount the tool changing system to the sledge of the linear guide using matching screws and the threads offered by the sledge

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/Chang-E/chang-e_step3.png)

- Mount the tool storage system to the structure e.g. by using slots nots and matching screws
- Adapt the position of the tool storage system to the maximum position of the sledge

![TSS Assembly Step 1](worktree/development_osh/doc/assembly/Chang-E/chang-e_step4.png)

- Add tools to the storage and the tool changer coupler