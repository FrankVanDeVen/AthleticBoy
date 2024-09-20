#define __SFR_OFFSET 0x00  // locatie speciale functie registers voor AVR 
#include "avr/io.h"        // deze bibliotheek maakt gebruik register namen mogelijk
.global wisScherm          // zet routines als "global" anders vind de compiler ze niet

wisScherm:                 // naam routine. hieronder staat de ASM code van deze routine
  push r24                 // stel register r24 veilig  (voor bit patroon te wissen vRam)
  push r25                 // stel register r25 veilig  (voor teller aantal te wissen bytes)
  push r26                 // stel register r26 veilig  (voor LSB adres vRam) 
  push r27                 // stel register r27 veilig  (voor MSB adres vRam)
  
  lds r26, vRam            // laad X met low (LSB) byte van vRam (2-byte integer)
  lds r27, vRam+1          // laad X met high (MSB) byte van vRam (2-byte integer)
  
  ldi r24, 0x80            // stel het bit patroon voor de te wissen geheugenlocatie in

  adiw r26,22              // tel aantal niet te wissen vRam adressen bij X op (max 63)
  ldi r25,39               // laad r25 met aantal te wissen bytes in vRam                     
loep_1: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_1              // indien niet 0 spring terug naar loep_1

  adiw r26,24              // tel aantal niet te wissen vRam adressen bij X op (max 63)
  ldi r25,11               // laad r25 met aantal te wissen bytes in vRam                     
loep_2: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_2              // indien niet 0 spring terug naar loep_2

  adiw r26,19              // tel aantal niet te wissen vRam adressen bij X op (max 63)
  ldi r25,12               // laad r25 met aantal te wissen bytes in vRam                     
loep_3: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_3              // indien niet 0 spring terug naar loep_3

  ldi r24, 0x00            // stel het bit patroon voor de te wissen geheugenlocatie in

  adiw r26,63              // tel aantal niet te wissen vRam adressen bij X op (max 63)
  adiw r26,63              // tel aantal niet te wissen vRam adressen bij X op (max 63)
  adiw r26,50              // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,36               // laad r25 met aantal te wissen bytes in vRam                     
loep_4: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_4              // indien niet 0 spring terug naar loep_4

  adiw r26,48              // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,122              // laad r25 met aantal te wissen bytes in vRam                     
loep_5: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_5              // indien niet 0 spring terug naar loep_5

  adiw r26,6               // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,122              // laad r25 met aantal te wissen bytes in vRam                     
loep_6: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_6              // indien niet 0 spring terug naar loep_6

  adiw r26,6               // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,122              // laad r25 met aantal te wissen bytes in vRam                     
loep_7: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_7              // indien niet 0 spring terug naar loep_7

  adiw r26,6               // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,122              // laad r25 met aantal te wissen bytes in vRam                     
loep_8: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_8              // indien niet 0 spring terug naar loep_8

  adiw r26,15              // tel aantal niet te wissen vRam adressen bij X op (max 63)  
  ldi r25,106              // laad r25 met aantal te wissen bytes in vRam                     
loep_9: 
  ST X+, R24               // schrijf r24 naar geheugen op adres (in X) en tel bij X 1 op
  subi r25, 1              // trek 1 van register 25 af 
  brne loep_9              // indien niet 0 spring terug naar loep_9

  pop r27                  // zet register r27 terug van stack
  pop r26                  // zet register r26 terug van stack
  pop r25                  // zet register r25 terug van stack
  pop r24                  // zet register r24 terug van stack
ret                        // return. sluit route af en gaat terug naar je C programma
