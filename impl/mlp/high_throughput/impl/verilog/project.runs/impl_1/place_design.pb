
Q
Command: %s
53*	vivadotcl2 
place_design2default:defaultZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7k325t2default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7k325t2default:defaultZ17-349h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
place_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
U

Starting %s Task
103*constraints2
Placer2default:defaultZ18-103h px� 
}
BMultithreading enabled for place_design using a maximum of %s CPUs12*	placeflow2
22default:defaultZ30-611h px� 
v

Phase %s%s
101*constraints2
1 2default:default2)
Placer Initialization2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
1.1 2default:default29
%Placer Initialization Netlist Sorting2default:defaultZ18-101h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.1702default:default2
1673.5592default:default2
0.0002default:defaultZ17-268h px� 
Z
EPhase 1.1 Placer Initialization Netlist Sorting | Checksum: db16f495
*commonh px� 
�

%s
*constraints2s
_Time (s): cpu = 00:00:00 ; elapsed = 00:00:00.182 . Memory (MB): peak = 1673.559 ; gain = 0.0002default:defaulth px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.1702default:default2
1673.5592default:default2
0.0002default:defaultZ17-268h px� 
�

Phase %s%s
101*constraints2
1.2 2default:default2F
2IO Placement/ Clock Placement/ Build Placer Device2default:defaultZ18-101h px� 
g
RPhase 1.2 IO Placement/ Clock Placement/ Build Placer Device | Checksum: 3e1fccab
*commonh px� 
�

%s
*constraints2o
[Time (s): cpu = 00:00:15 ; elapsed = 00:00:12 . Memory (MB): peak = 1673.559 ; gain = 0.0002default:defaulth px� 
}

Phase %s%s
101*constraints2
1.3 2default:default2.
Build Placer Netlist Model2default:defaultZ18-101h px� 
P
;Phase 1.3 Build Placer Netlist Model | Checksum: 11ea5e652
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:00:44 ; elapsed = 00:00:33 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
z

Phase %s%s
101*constraints2
1.4 2default:default2+
Constrain Clocks/Macros2default:defaultZ18-101h px� 
M
8Phase 1.4 Constrain Clocks/Macros | Checksum: 11ea5e652
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:00:44 ; elapsed = 00:00:34 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
I
4Phase 1 Placer Initialization | Checksum: 11ea5e652
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:00:44 ; elapsed = 00:00:34 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
q

Phase %s%s
101*constraints2
2 2default:default2$
Global Placement2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
2.1 2default:default2!
Floorplanning2default:defaultZ18-101h px� 
C
.Phase 2.1 Floorplanning | Checksum: 137381161
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:00:54 ; elapsed = 00:00:40 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 


Phase %s%s
101*constraints2
2.2 2default:default20
Physical Synthesis In Placer2default:defaultZ18-101h px� 
K
)No high fanout nets found in the design.
65*physynthZ32-65h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2�
Ymvprod_layer_1_U0/mlp_mul_18s_18s_3bkb_U26/mlp_mul_18s_18s_3bkb_MulnS_0_U/grp_fu_17640_ceYmvprod_layer_1_U0/mlp_mul_18s_18s_3bkb_U26/mlp_mul_18s_18s_3bkb_MulnS_0_U/grp_fu_17640_ce2default:default2�
Wmvprod_layer_1_U0/mlp_mul_18s_18s_3bkb_U26/mlp_mul_18s_18s_3bkb_MulnS_0_U/p_reg_i_1__14	Wmvprod_layer_1_U0/mlp_mul_18s_18s_3bkb_U26/mlp_mul_18s_18s_3bkb_MulnS_0_U/p_reg_i_1__142default:default8Z32-117h px� 
P
.No nets found for critical-cell optimization.
68*physynthZ32-68h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.1742default:default2
2069.4882default:default2
0.0002default:defaultZ17-268h px� 
B
-
Summary of Physical Synthesis Optimizations
*commonh px� 
B
-============================================
*commonh px� 


*commonh px� 


*commonh px� 
�
~-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Optimization       |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Very High Fanout   |            0  |              0  |                     0  |           0  |           1  |  00:00:01  |
|  Critical Cell      |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total              |            0  |              0  |                     0  |           0  |           2  |  00:00:01  |
-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 


*commonh px� 


*commonh px� 
R
=Phase 2.2 Physical Synthesis In Placer | Checksum: 218146725
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:04 ; elapsed = 00:02:54 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
D
/Phase 2 Global Placement | Checksum: 179ec41cb
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:07 ; elapsed = 00:02:57 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
q

Phase %s%s
101*constraints2
3 2default:default2$
Detail Placement2default:defaultZ18-101h px� 
}

Phase %s%s
101*constraints2
3.1 2default:default2.
Commit Multi Column Macros2default:defaultZ18-101h px� 
P
;Phase 3.1 Commit Multi Column Macros | Checksum: 179ec41cb
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:08 ; elapsed = 00:02:57 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 


Phase %s%s
101*constraints2
3.2 2default:default20
Commit Most Macros & LUTRAMs2default:defaultZ18-101h px� 
R
=Phase 3.2 Commit Most Macros & LUTRAMs | Checksum: 1153bfe86
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:44 ; elapsed = 00:03:25 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
y

Phase %s%s
101*constraints2
3.3 2default:default2*
Area Swap Optimization2default:defaultZ18-101h px� 
K
6Phase 3.3 Area Swap Optimization | Checksum: e19212e9
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:46 ; elapsed = 00:03:27 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
�

Phase %s%s
101*constraints2
3.4 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
S
>Phase 3.4 Pipeline Register Optimization | Checksum: f5efa1ad
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:47 ; elapsed = 00:03:27 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
x

Phase %s%s
101*constraints2
3.5 2default:default2)
Timing Path Optimizer2default:defaultZ18-101h px� 
J
5Phase 3.5 Timing Path Optimizer | Checksum: f5efa1ad
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:04:47 ; elapsed = 00:03:27 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
t

Phase %s%s
101*constraints2
3.6 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
F
1Phase 3.6 Fast Optimization | Checksum: a68e61c2
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:05:03 ; elapsed = 00:03:43 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 


Phase %s%s
101*constraints2
3.7 2default:default20
Small Shape Detail Placement2default:defaultZ18-101h px� 
R
=Phase 3.7 Small Shape Detail Placement | Checksum: 17e5d0aca
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:05:47 ; elapsed = 00:04:31 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
u

Phase %s%s
101*constraints2
3.8 2default:default2&
Re-assign LUT pins2default:defaultZ18-101h px� 
H
3Phase 3.8 Re-assign LUT pins | Checksum: 16cb19ccb
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:05:52 ; elapsed = 00:04:36 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
�

Phase %s%s
101*constraints2
3.9 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.9 Pipeline Register Optimization | Checksum: 106e4e5cc
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:05:52 ; elapsed = 00:04:37 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
u

Phase %s%s
101*constraints2
3.10 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.10 Fast Optimization | Checksum: 6752ec62
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:06:52 ; elapsed = 00:05:20 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
C
.Phase 3 Detail Placement | Checksum: 6752ec62
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:06:53 ; elapsed = 00:05:21 . Memory (MB): peak = 2069.488 ; gain = 395.9302default:defaulth px� 
�

Phase %s%s
101*constraints2
4 2default:default2<
(Post Placement Optimization and Clean-Up2default:defaultZ18-101h px� 
{

Phase %s%s
101*constraints2
4.1 2default:default2,
Post Commit Optimization2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�

Phase %s%s
101*constraints2
4.1.1 2default:default2/
Post Placement Optimization2default:defaultZ18-101h px� 
U
@Post Placement Optimization Initialization | Checksum: a1bbeac4
*commonh px� 
u

Phase %s%s
101*constraints2
4.1.1.1 2default:default2"
BUFG Insertion2default:defaultZ18-101h px� 
�
�BUFG insertion identified %s candidate nets, %s success, %s skipped for placement/routing, %s skipped for timing, %s skipped for netlist change reason.30*	placeflow2
02default:default2
02default:default2
02default:default2
02default:default2
02default:defaultZ46-31h px� 
G
2Phase 4.1.1.1 BUFG Insertion | Checksum: a1bbeac4
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:29 ; elapsed = 00:05:44 . Memory (MB): peak = 2149.941 ; gain = 476.3832default:defaulth px� 
�
hPost Placement Timing Summary WNS=%s. For the most accurate timing information please run report_timing.610*place2
-3.7762default:defaultZ30-746h px� 
S
>Phase 4.1.1 Post Placement Optimization | Checksum: 1ac7a35f6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:11 ; elapsed = 00:07:09 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
N
9Phase 4.1 Post Commit Optimization | Checksum: 1ac7a35f6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:12 ; elapsed = 00:07:10 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
y

Phase %s%s
101*constraints2
4.2 2default:default2*
Post Placement Cleanup2default:defaultZ18-101h px� 
L
7Phase 4.2 Post Placement Cleanup | Checksum: 1ac7a35f6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:13 ; elapsed = 00:07:11 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
s

Phase %s%s
101*constraints2
4.3 2default:default2$
Placer Reporting2default:defaultZ18-101h px� 
F
1Phase 4.3 Placer Reporting | Checksum: 1ac7a35f6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:14 ; elapsed = 00:07:12 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
z

Phase %s%s
101*constraints2
4.4 2default:default2+
Final Placement Cleanup2default:defaultZ18-101h px� 
M
8Phase 4.4 Final Placement Cleanup | Checksum: 1a570d2c6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:15 ; elapsed = 00:07:13 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
\
GPhase 4 Post Placement Optimization and Clean-Up | Checksum: 1a570d2c6
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:15 ; elapsed = 00:07:13 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
=
(Ending Placer Task | Checksum: b401339e
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:09:15 ; elapsed = 00:07:13 . Memory (MB): peak = 2155.801 ; gain = 482.2422default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
542default:default2
02default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
place_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
place_design: 2default:default2
00:09:262default:default2
00:07:222default:default2
2155.8012default:default2
482.2422default:defaultZ17-268h px� 
H
&Writing timing data to binary archive.266*timingZ38-480h px� 
D
Writing placer database...
1603*designutilsZ20-1893h px� 
=
Writing XDEF routing.
211*designutilsZ20-211h px� 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px� 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2)
Write XDEF Complete: 2default:default2
00:00:252default:default2
00:00:092default:default2
2155.8012default:default2
0.0002default:defaultZ17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2�
wC:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/project.runs/impl_1/mlp_placed.dcp2default:defaultZ17-1381h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2&
write_checkpoint: 2default:default2
00:00:322default:default2
00:00:162default:default2
2155.8012default:default2
0.0002default:defaultZ17-268h px� 
^
%s4*runtcl2B
.Executing : report_io -file mlp_io_placed.rpt
2default:defaulth px� 
�
kreport_io: Time (s): cpu = 00:00:00 ; elapsed = 00:00:00.102 . Memory (MB): peak = 2155.801 ; gain = 0.000
*commonh px� 
�
%s4*runtcl2r
^Executing : report_utilization -file mlp_utilization_placed.rpt -pb mlp_utilization_placed.pb
2default:defaulth px� 
�
preport_utilization: Time (s): cpu = 00:00:01 ; elapsed = 00:00:02 . Memory (MB): peak = 2155.801 ; gain = 0.000
*commonh px� 
{
%s4*runtcl2_
KExecuting : report_control_sets -verbose -file mlp_control_sets_placed.rpt
2default:defaulth px� 
�
ureport_control_sets: Time (s): cpu = 00:00:01 ; elapsed = 00:00:00.733 . Memory (MB): peak = 2155.801 ; gain = 0.000
*commonh px� 


End Record