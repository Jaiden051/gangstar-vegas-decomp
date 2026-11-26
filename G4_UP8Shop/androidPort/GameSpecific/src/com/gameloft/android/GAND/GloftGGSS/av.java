// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class av implements com.bda.controller.i {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    av(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.bda.controller.KeyEvent p0)
    {
      int v2;
      int v3;
      v2 = 1;
      if ( !Game.v )
      {
        v3 = p0.c();
        switch ( v3 )
        {
          case 19:
            if ( Game.access$400().a(4) == 1 )
              v3 = 19;
            break;
          case 20:
            if ( Game.access$400().a(4) == 1 )
              v3 = 20;
            break;
          case 21:
            if ( Game.access$400().a(4) == 1 )
              v3 = 21;
            break;
          case 22:
            if ( Game.access$400().a(4) == 1 )
              v3 = 22;
            break;
          case 96:
            v3 = 23;
            break;
          case 97:
            v3 = 44;
            break;
          case 99:
            v3 = 99;
            break;
          case 100:
            v3 = 100;
            break;
          case 102:
            v3 = 102;
            break;
          case 103:
            v3 = 103;
            break;
          case 104:
            v3 = 312;
            break;
          case 105:
            v3 = 313;
            break;
          case 108:
            v3 = 108;
            break;
          case 109:
            v3 = 109;
            break;
          default:
            break;
        }
        if ( p0.b() == 0 )
          Game.access$600(v3, com.gameloft.android.DecompRT.b2i(Game.access$500() == -2));
        if ( p0.b() == 1 )
        {
          if ( Game.access$500() != -2 )
            v2 = 0;
          Game.access$700(v3, v2);
        }
      }
    }

    public final void a(com.bda.controller.MotionEvent p0)
    {
      if ( !Game.v && Game.access$500() == -2 )
      {
        Game.nativeJoyPadMove(Game.packFloatToInt255(p0.a(0)), -Game.packFloatToInt255(p0.a(1)), 0, 0);
        Game.nativeJoyPadMove(Game.packFloatToInt255(p0.a(11)), Game.packFloatToInt255(p0.a(14)), 0, 1);
      }
    }

    public final void a(com.bda.controller.StateEvent p0)
    {
      if ( !Game.v )
      {
        switch ( p0.c() )
        {
          case 1:
            switch ( p0.b() )
            {
              case 0:
                if ( Game.av )
                {
                  if ( Game.access$800() == Game$GameControllerType.b.ordinal() )
                  {
                    Game.access$1200(Game$GameControllerType.b.ordinal());
                    Game.access$802(-1);
                    Game.access$502(-1);
                  }
                  Game.access$1300(0);
                  Game.access$1100(2);
                  Game.av = false;
                }
                break;
              case 1:
                if ( Game.access$800() == -1 )
                {
                  Game.setCurrentControl(Game$GameControllerType.b.ordinal(), -2);
                  Game.av = true;
                  Game.access$1100(Game.access$400().a(4));
                  this.a.getWindow().setFlags(1152, 1152);
                }
                else if ( Game.access$900() != -3 && Game.access$500() != -2 )
                {
                  if ( Game.access$1000(Game$GameControllerType.b.ordinal()) == 1 )
                    Game.access$902(-2);
                  else
                    Game.access$902(-3);
                }
                break;
              default:
                return;
            }
            break;
          case 2:
            p0.b();
            break;
          default:
            return;
        }
      }
    }

}
