
set TopModule "mlp"
set ClockPeriod "4.000000"
set ClockList {ap_clk}
set multiClockList {}
set PortClockMap {}
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 0
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 1
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xc7k325t:ffg676:-2"
set SourceFiles {sc {} c ../../../src/mlp.cpp}
set SourceFlags {sc {} c {{}}}
set DirectiveFile {C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/solution1/solution1.directive}
set TBFiles {verilog {../../../../mvprod_test/src/L1_out_activ.dat ../../../../mvprod_test/src/L1_out_no_activ.dat ../../../../mvprod_test/src/L2_out_activ.dat ../../../../mvprod_test/src/L2_out_no_activ.dat ../../../src/network_inputs_fullbatch.dat ../../../src/network_outputs_fullbatch.dat ../../../src/tb_mlp.cpp ../../../src/theta1.dat ../../../src/theta2.dat} bc {../../../../mvprod_test/src/L1_out_activ.dat ../../../../mvprod_test/src/L1_out_no_activ.dat ../../../../mvprod_test/src/L2_out_activ.dat ../../../../mvprod_test/src/L2_out_no_activ.dat ../../../src/network_inputs_fullbatch.dat ../../../src/network_outputs_fullbatch.dat ../../../src/tb_mlp.cpp ../../../src/theta1.dat ../../../src/theta2.dat} vhdl {../../../../mvprod_test/src/L1_out_activ.dat ../../../../mvprod_test/src/L1_out_no_activ.dat ../../../../mvprod_test/src/L2_out_activ.dat ../../../../mvprod_test/src/L2_out_no_activ.dat ../../../src/network_inputs_fullbatch.dat ../../../src/network_outputs_fullbatch.dat ../../../src/tb_mlp.cpp ../../../src/theta1.dat ../../../src/theta2.dat} sc {../../../../mvprod_test/src/L1_out_activ.dat ../../../../mvprod_test/src/L1_out_no_activ.dat ../../../../mvprod_test/src/L2_out_activ.dat ../../../../mvprod_test/src/L2_out_no_activ.dat ../../../src/network_inputs_fullbatch.dat ../../../src/network_outputs_fullbatch.dat ../../../src/tb_mlp.cpp ../../../src/theta1.dat ../../../src/theta2.dat} cas {../../../../mvprod_test/src/L1_out_activ.dat ../../../../mvprod_test/src/L1_out_no_activ.dat ../../../../mvprod_test/src/L2_out_activ.dat ../../../../mvprod_test/src/L2_out_no_activ.dat ../../../src/network_inputs_fullbatch.dat ../../../src/network_outputs_fullbatch.dat ../../../src/tb_mlp.cpp ../../../src/theta1.dat ../../../src/theta2.dat} c {}}
set SpecLanguage "C"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/kintex7/kintex7 xilinx/kintex7/kintex7_fpv6}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution1.aps"
set AvePath "../.."
set HPFPO "0"
