################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.c" \

C_SRCS += \
../SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.c \

OBJS_OS_FORMAT += \
./SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.o \

C_DEPS_QUOTED += \
"./SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.d" \

OBJS += \
./SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.o \

OBJS_QUOTED += \
"./SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.o" \

C_DEPS += \
./SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.d \


# Each subdirectory must supply rules for building sources it contributes
SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.o: ../SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.c
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "SDK/middleware/sdhc/fatfs/usdhc_fatfs_impl.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


