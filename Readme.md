MM-ToF10 �p Arduino���C�u����

-------------------------


## MM-ToF10�Ƃ�

MM-ToF10�Ƃ́A�T���n���g������� ���甭���� Spresense���� ToF�Z���T�[ Add-on�{�[�h�ł��B
�ڍׂ́A���L���i�T�C�g���������������B

![](https://shop.sunhayato.co.jp/cdn/shop/files/image-mm-tof10-is-01_8fbe3afe-b331-403e-b4d3-459751dc0205_606x606.jpg?v=1729473437)

MM-ToF10 : https://shop.sunhayato.co.jp/products/mm-tof10-is

�T���n���g������� �Fhttps://www.sunhayato.co.jp/


-------------------------

### API

#### begin

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        ���C�u���������������s���܂��B�B

#### end

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        ���C�u������j�����܂��B

#### wakeup

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        �f�o�C�X���N�����܂��B
        
#### sleep

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        �f�o�C�X���X���[�v���܂��B


#### sync

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        �������[�h�ɑJ�ڂ��A�������s���܂��B

#### nomal

  �����F
          MMToF10_Distance dist : �������[�h���w�肵�܂��B
          MMToF10_Rate     rate : �t���[�����[�g���[�h���w�肵�܂��B

  �߂�l�F �Ȃ�
  
  �����F
        �ʏ�v�����[�h�ɑJ�ڂ��܂��B���̃��[�h�ł̂ݑ������\�ł��B

#### skip

  �����Fint cnt  : �j������o�C�g�����w�肵�܂��B

  �߂�l�F �Ȃ�
  
  �����F
        �w�肵���o�C�g�������f�[�^��j�����܂��B�f�[�^�̓����̂��߂Ɏg�p���܂��B
        �������w�肵�Ȃ��ꍇ�A�󂯎�����p�P�b�g�Ŏw�肳�ꂽ�T�C�Y�����j�����܂��B

#### set

  �����F
          int cmd  : �ݒ肵�����R�}���h�R�[�h���w�肵�܂��B
          int val  : �ݒ肵�����f�[�^���w�肵�܂��B
          int cnt  : 

  �߂�l�F �Ȃ�

  �����F
        MM-S50MV �ɃR�}���h�ƒl��ݒ肵�܂��B
        MM-S50MV �̃R�}���h�́A�f�o�C�X�d�l�����Q�Ƃ��Ă��������B
        MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

#### led

  �����F
          int r  : �ԐF�̒l���w�肵�܂��B
          int g  : �F�̒l���w�肵�܂��B
          int b  : �ΐF�̒l���w�肵�܂��B
  
  �߂�l�F �Ȃ�

  �����F
        LED���w�肵���F�œ_�������܂��B


#### get1d

  �����F�Ȃ�
  
  �߂�l�F float distance : �����f�[�^(mm)

  �����F
        1�����̋����f�[�^���擾���܂��B(mm)


#### get3d

  �����F
         float* ptr : �擾�����f�[�^���i�[����z����w�肵�܂��Buint32_t��4*8�̃f�[�^�i128�o�C�g�j���i�[�ł���G���A���K�v�ł��B

  �߂�l�F

  �����F
        3�����̋����f�[�^���擾���܂��B(mm)


### �g����

    �ȉ��̃T���v���R�[�h���Q�l�ɂ��Ă��������B
    
    examples/OneDMesure/OneDMesure.ino
    examples/ThreeDMesure/ThreeDMesure.ino

