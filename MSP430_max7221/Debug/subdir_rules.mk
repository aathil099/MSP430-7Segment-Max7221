################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1020/ccs/tools/compiler/ti-cgt-msp430_20.2.2.LTS/bin/cl430" -vmsp --use_hw_mpy=16 --include_path="C:/ti/ccs1020/ccs/ccs_base/msp430/include" --include_path="C:/Users/User/workspace_v10/try1max7221" --include_path="C:/ti/ccs1020/ccs/tools/compiler/ti-cgt-msp430_20.2.2.LTS/include" --advice:power=all --define=__MSP430F2491__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU19 --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


