/**
  ******************************************************************************
  * @file    platform_config.h
  * @author  MCD Application Team
  * @version V4.0.0
  * @date    21-January-2013
  * @brief   Evaluation board specific configuration file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H

/* Includes ------------------------------------------------------------------*/

 #include "stm32f10x.h"
 

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment the line corresponding to the STMicroelectronics evaluation board
   used to run the example */


/*Unique Devices IDs register set*/



/*STM32F1x*/

#define         ID1          (0x1FFFF7E8)
#define         ID2          (0x1FFFF7EC)
#define         ID3          (0x1FFFF7F0)



/* Define the STM32F10x hardware depending on the used evaluation board */

#define USB_DISCONNECT                      GPIOG  
#define USB_DISCONNECT_PIN                  GPIO_Pin_8

#define RCC_APB2Periph_GPIO_DISCONNECT      RCC_APB2Periph_GPIOG

#define RCC_APB2Periph_ALLGPIO             (RCC_APB2Periph_GPIOA \
                                          | RCC_APB2Periph_GPIOB \
                                          | RCC_APB2Periph_GPIOC \
                                          | RCC_APB2Periph_GPIOD \
                                          | RCC_APB2Periph_GPIOE \
                                          | RCC_APB2Periph_GPIOF \
                                          | RCC_APB2Periph_GPIOG)

#define GPIO_KEY_EXTI_Line                  EXTI_Line18


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __PLATFORM_CONFIG_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

