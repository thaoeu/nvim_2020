Vim�UnDo� Y����B��Z��:�`�����Kľ}`��ң   �   		KC_J, KC_K, KC_L, KC_QUOTE,            !       !   !   !    ^�h    _�                     {       ����                                                                                                                                                                                                                                                                                                                                                             ^�`Y    �   z   |   �            tap_code(KC_VOLD);5�_�                    }       ����                                                                                                                                                                                                                                                                                                                                                             ^�`a    �   |   ~   �            tap_code(KC_VOLU);5�_�                            ����                                                                                                                                                                                                                                                                                                                                       
           V        ^�`z     �                -qk_tap_dance_action_t tap_dance_actions[] = {   3  [ENT_1] = ACTION_TAP_DANCE_DOUBLE(M(0), KC_RIGHT)   };5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        ^�`|     �                enum {   	ENT_1 = 0,   };5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        ^�`�    �   
             #/*零层，主区负责数字输入   ALT(1, KC_E)	单击为 E (于 Dvorak 下为 . ) 长按打开一层   :TD(ENT_1)	单击为 ENTER	双击切换长 LGUI ( WIN 键 )   */5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�b     �         �      	�         �    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�b     �         �      ${0}�   	      �      (		KC_${14}, KC_${15}, KC_${16}, KC_${17}�      
   �      )		KC_${10}, KC_${11}, KC_${12}, KC_${13},�      	   �      %		KC_${6}, KC_${7}, KC_${8}, KC_${9},�         �      %		KC_${2}, KC_${3}, KC_${4}, KC_${5},�         �      [${1:LayoutName}] = LAYOUT(�         �      LAY5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�b     �      
   �      		KC_, KC_, KC_, KC_,�      	   �      		KC_, KC_, KC_, KC_,�         �      		KC_, KC_, KC_, KC_,�         �      [LayoutName] = LAYOUT(5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�b�     �         �      [1] = LAYOUT(5�_�   	              
   
       ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�b�     �   	      �      		KC_, KC_, KC_, KC_5�_�   
                 
       ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�b�    �   	      �      		KC_, KC_, KC_, KC_5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�d0     �   	      �       		KC_, KC_, KC_, LT(1, KC_SPACE)5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�d;    �   	      �      "		KC_, KC_, MO(2), LT(1, KC_SPACE)5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�dC    �   	      �      $		KC_, MO(3), MO(2), LT(1, KC_SPACE)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       ^�dO     �                [0] = LAYOUT(   		KC_7, KC_8, KC_9, KC_BSPACE,   		KC_4, KC_5, KC_6, KC_PGUP,   		KC_1, KC_2, KC_3, KC_PGDOWN,   *		TD(ENT_1), LT(1, KC_0), KC_E, KC_ENTER),   [1] = LAYOUT(   		M(7), M(8), M(9), M(10),   		M(4), M(5), M(6), KC_COPY,   		M(1), M(2), M(3), KC_PASTE,   !		M(0), KC_TRNS, M(111), M(112)),   [2] = LAYOUT(   		M(0), M(1), M(2), M(3),   $		KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,   		M(4), KC_5, KC_6, KC_DOWN,   %		KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),   [3] = LAYOUT(   ,		G(KC_7), G(KC_8), G(KC_9), G(S(KC_COMMA)),   2		G(KC_4), G(KC_5), G(KC_6), LT(KC_LGUI, KC_PGUP),   '		G(KC_1), G(KC_2), G(KC_3), KC_INSERT,   /		KC_PAUSE, KC_LGUI, G(KC_3), LT(1, KC_ENTER)),5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^�dQ    �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                            	                      V        ^�d�    �      
   s      		KC_q, KC_w, KC_e, KC_r,   		KC_a, KC_s, KC_d, KC_f,   		KC_z, KC_x, KC_c, KC_v,5�_�                            ����                                                                                                                                                                                                                                                                                                                            	                      V        ^�d�     �         t       �         s    5�_�                           ����                                                                                                                                                                                                                                                                                                                            	                      V        ^�d�     �         z      ${0}�         z      (		KC_${14}, KC_${15}, KC_${16}, KC_${17}�         z      )		KC_${10}, KC_${11}, KC_${12}, KC_${13},�         z      %		KC_${6}, KC_${7}, KC_${8}, KC_${9},�         z      %		KC_${2}, KC_${3}, KC_${4}, KC_${5},�         z      [${1:LayoutName}] = LAYOUT(�         t      LAY5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�d�     �         z      		KC_, KC_, KC_, KC_�         z      		KC_, KC_, KC_, KC_,�         z      		KC_, KC_, KC_, KC_,�         z      		KC_, KC_, KC_, KC_,�         z      [LayoutName] = LAYOUT(5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�e�   	 �                		KC_Y, KC_H, KC_N, KC_TRNS5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^�e�     �         {           �         {       �         z    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�e�     �         �      ${0}�         �      (		KC_${14}, KC_${15}, KC_${16}, KC_${17}�         �      )		KC_${10}, KC_${11}, KC_${12}, KC_${13},�         �      %		KC_${6}, KC_${7}, KC_${8}, KC_${9},�         �      %		KC_${2}, KC_${3}, KC_${4}, KC_${5},�         �      [${1:LayoutName}] = LAYOUT(�         z      Layout5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�e�     �         �      		KC_, KC_, KC_, KC_�         �      		KC_, KC_, KC_, KC_,�         �      		KC_, KC_, KC_, KC_,�         �      		KC_, KC_, KC_, KC_,�         �      [LayoutName] = LAYOUT(5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�fH     �         �      		KC_GRAVE, KC_TRNS, KC_, KC_5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�fN     �         �       �         �      !		KC_GRAVE, KC_TRNS, KC_TRNS, KC_5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f^     �         �      ${0}�         �      (		KC_${14}, KC_${15}, KC_${16}, KC_${17}�         �      )		KC_${10}, KC_${11}, KC_${12}, KC_${13},�         �      %		KC_${6}, KC_${7}, KC_${8}, KC_${9},�         �      %		KC_${2}, KC_${3}, KC_${4}, KC_${5},�         �      [${1:LayoutName}] = LAYOUT(�         �      Layout5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f_     �         �      		KC_, KC_, KC_, KC_�         �      		KC_, KC_, KC_, KC_,�         �      		KC_, KC_, KC_, KC_,�         �      		KC_, KC_, KC_, KC_,�         �      [LayoutName] = LAYOUT(5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f�     �         �      		KC_TRNS, KC_, KC_, KC_5�_�                           ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f�     �         �      		KC_TRNS, KC_TRNS, KC_, KC_5�_�                            ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f�     �         �       		KC_TRNS, KC_TRNS, KC_TRNS, KC_5�_�      !                  $    ����                                                                                                                                                                                                                                                                                                                                         
       v   
    ^�f�   
 �                $		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS5�_�                   !          ����                                                                                                                                                                                                                                                                                                                                                             ^�h    �         �      		KC_J, KC_K, KC_L, KC_QUOTE,5��