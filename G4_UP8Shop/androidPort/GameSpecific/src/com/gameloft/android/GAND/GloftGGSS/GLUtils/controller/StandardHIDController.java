// Decompiled from classes.dex (SourceFile: StandardHIDController.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils.controller;

import android.view.InputDevice;
import android.view.KeyCharacterMap;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
public class StandardHIDController {
    // Fields
    private static com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController b;
    private static java.util.TimerTask c;
    private static boolean d;
    private static boolean e;
    private static int h;
    java.util.ArrayList a;
    private int f;
    private boolean g;
    private int[] i;
    private int[] j;

    // Methods
    static
    {
      b = null;
      c = null;
      d = false;
      e = false;
    }

    private StandardHIDController(android.view.InputDevice p0)
    {
      super();
      this.g = false;
      this.i = new int[] { 102, 103, 100, 99, 96, 97, 106, 107, 4, 109, 108 };
      this.j = new int[] { 11, 12, 13, 15, 14, 16, 20, 21, 19, 18, 17 };
      this.a = new java.util.ArrayList();
      this.f = p0.getId();
      this.a(this.i);
      this.a(p0);
      this.b();
    }

    private static void CheckForJoysticks()
    {
      android.view.InputDevice v0; // RETVAL
    
      v0 = findBySource(16777232);
      if ( b != null )
      {
        if ( v0 == null || b.f != v0.getId() )
          ControllerDisconnected();
      }
      else if ( v0 != null )
      {
        ControllerConnected(v0);
      }
    }

    private static void ControllerConnected(android.view.InputDevice p0)
    {
      b = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController(p0);
      NativeBridgeHIDControllers.NativeControllerConnected(p0.getName());
    }

    private static void ControllerDisconnected()
    {
      b = null;
      System.gc();
      NativeBridgeHIDControllers.NativeControllerDisconnected();
    }

    private static boolean DispatchGenericEvent(
            float p0,
            com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c p1)
    {
      boolean v2;
      v2 = true;
      if ( Math.abs(p0) <= p1.d )
      {
        if ( Math.abs(p1.c) <= p1.d )
        {
          return false;
        }
        else
        {
          p1.c = 0.0;
          NativeBridgeHIDControllers.NativeHandleInputEvents(p1.b, p1.c);
        }
      }
      else
      {
        p1.c = p0;
        NativeBridgeHIDControllers.NativeHandleInputEvents(p1.b, p1.c);
      }
      return v2;
    }

    public static boolean HandleInputEventPressed(android.view.KeyEvent p0)
    {
      boolean v1;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController v3;
      int i;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v5;
      v1 = false;
      if ( b != null )
      {
        v3 = b;
        if ( p0.getDevice().getId() == v3.f && p0.getAction() == 0 )
        {
          for ( i = 0; i < v3.a.size(); ++i )
          {
            v5 = (com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c)v3.a.get(i);
            if ( p0.getKeyCode() == -v5.a )
              return DispatchGenericEvent(1.0f, v5);
          }
        }
      }
      return v1;
    }

    public static boolean HandleInputEventReleased(android.view.KeyEvent p0)
    {
      boolean v1;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController v3;
      int i;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v5;
      v1 = false;
      if ( b != null )
      {
        v3 = b;
        if ( p0.getDevice().getId() == v3.f && p0.getAction() == 1 )
        {
          for ( i = 0; i < v3.a.size(); ++i )
          {
            v5 = (com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c)v3.a.get(i);
            if ( p0.getKeyCode() == -v5.a )
              return DispatchGenericEvent(0.0f, v5);
          }
        }
      }
      return v1;
    }

    public static boolean HandleMotionEvent(android.view.MotionEvent p0)
    {
      boolean v1;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController v3;
      boolean v4;
      boolean v5;
      boolean v6;
      boolean v7;
      boolean v8;
      boolean v9; // RETVAL
    
      v1 = false;
      if ( b != null )
      {
        v3 = b;
        if ( p0 != null && p0.getDevice() != null && p0.getDevice().getId() == v3.f && p0.getAction() == 2 )
        {
          if ( v3.g )
          {
            v5 = false;
            v4 = false;
          }
          else
          {
            v4 = v3.a(p0, 1);
            v5 = v3.a(p0, 2);
          }
          v6 = v3.a(p0, 3);
          v7 = v3.a(p0, 4);
          v8 = v3.a(p0, 5);
          v9 = v3.a(p0, 6);
          if ( v4 || v5 || v6 || v7 || v8 || v9 )
            return true;
        }
      }
      return v1;
    }

    public static void PauseControllerListener()
    {
      d = false;
    }

    public static void ResumeControllerListener()
    {
      d = true;
    }

    public static void StartControllerListener(int p0)
    {
      e = true;
      if ( c == null )
      {
        c = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.b(p0);
        Executors.newSingleThreadScheduledExecutor().schedule(c, 0, TimeUnit.SECONDS);
      }
    }

    public static void StopControllerListener()
    {
      e = false;
      c = null;
    }

    private com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c a(int p0)
    {
      int i;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v3;
      for ( i = 0; i < this.a.size(); ++i )
      {
        v3 = (com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c)this.a.get(i);
        if ( v3.b == p0 )
          return v3;
      }
      return null;
    }

    private com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c a(int p0, int p1, boolean p2)
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v4; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v5;
      v4 = this.a(p1);
      v5 = v4;
      if ( v4 != null )
      {
        if ( p2 )
        {
          this.a(v4);
          v5 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c(this, 0);
          v5.d = 0.0;
          this.a(-p0, p1, v5);
        }
      }
      else
      {
        v5 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c(this, 0);
        v5.d = 0.0;
        this.a(-p0, p1, v5);
      }
      return v5;
    }

    private com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c a(
            android.view.InputDevice.MotionRange p0,
            int p1,
            boolean p2)
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v4; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v5;
      v4 = this.a(p1);
      v5 = v4;
      if ( v4 != null )
      {
        if ( p2 )
        {
          this.a(v4);
          v5 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c(this, 0);
          v5.d = p0.getFlat() + p0.getFuzz();
          this.a(p0.getAxis(), p1, v5);
        }
      }
      else
      {
        v5 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c(this, 0);
        v5.d = p0.getFlat() + p0.getFuzz();
        this.a(p0.getAxis(), p1, v5);
      }
      return v5;
    }

    private void a()
    {
      this.g = false;
      if ( this.a(1) == null && this.a(2) == null )
      {
        if ( KeyCharacterMap.deviceHasKey(104) && KeyCharacterMap.deviceHasKey(105) )
        {
          this.a(104, 1, true);
          this.a(105, 2, true);
          this.g = true;
        }
        else if ( KeyCharacterMap.deviceHasKey(102) && KeyCharacterMap.deviceHasKey(103) )
        {
          this.a(this.a(11));
          this.a(102, 1, true);
          this.a(this.a(12));
          this.a(103, 2, true);
          this.g = true;
        }
      }
    }

    private void a(int p0, int p1, com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c p2)
    {
      p2.a = p0;
      p2.b = p1;
      p2.c = 0.0;
      this.a.add(p2);
    }

    private void a(android.view.InputDevice p0)
    {
      java.util.Iterator v2;
      android.view.InputDevice.MotionRange v3;
      v2 = p0.getMotionRanges().iterator();
      while ( v2.hasNext() )
      {
        v3 = (android.view.InputDevice.MotionRange)v2.next();
        switch ( v3.getAxis() )
        {
          case 0:
            this.a(v3, 3, true);
            break;
          case 1:
            this.a(v3, 4, true);
            break;
          case 11:
            this.a(v3, 5, true);
            break;
          case 12:
            this.a(v3, 5, false);
            break;
          case 13:
            this.a(v3, 6, false);
            break;
          case 14:
            this.a(v3, 6, true);
            break;
          case 17:
            this.a(v3, 1, false);
            break;
          case 18:
            this.a(v3, 2, false);
            break;
          case 22:
            this.a(v3, 2, true);
            break;
          case 23:
            this.a(v3, 1, true);
            break;
          default:
            continue;
        }
      }
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c p0)
    {
      this.a.remove(p0);
    }

    private void a(int[] p0)
    {
      int i;
      for ( i = 0; i < p0.length; ++i )
        this.a(p0[i], this.j[i], true);
      this.a(19, 7, true);
      this.a(20, 8, true);
      this.a(21, 9, true);
      this.a(22, 10, true);
    }

    private boolean a(android.view.KeyEvent p0)
    {
      boolean v2;
      int i;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v4;
      v2 = false;
      if ( p0.getDevice().getId() == this.f && p0.getAction() == 0 )
      {
        for ( i = 0; i < this.a.size(); ++i )
        {
          v4 = (com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c)this.a.get(i);
          if ( p0.getKeyCode() == -v4.a )
            return DispatchGenericEvent(1.0f, v4);
        }
      }
      return v2;
    }

    private boolean a(android.view.MotionEvent p0)
    {
      boolean v2;
      boolean v3;
      boolean v4;
      boolean v5;
      boolean v6;
      boolean v7;
      boolean v8; // RETVAL
    
      v2 = false;
      if ( p0 != null && p0.getDevice() != null && p0.getDevice().getId() == this.f && p0.getAction() == 2 )
      {
        if ( this.g )
        {
          v4 = false;
          v3 = false;
        }
        else
        {
          v3 = this.a(p0, 1);
          v4 = this.a(p0, 2);
        }
        v5 = this.a(p0, 3);
        v6 = this.a(p0, 4);
        v7 = this.a(p0, 5);
        v8 = this.a(p0, 6);
        if ( v3 || v4 || v5 || v6 || v7 || v8 )
          return true;
      }
      return v2;
    }

    private boolean a(android.view.MotionEvent p0, int p1)
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v3; // RETVAL
    
      v3 = this.a(p1);
      return v3 != null && p0 != null && DispatchGenericEvent(p0.getAxisValue(v3.a), v3);
    }

    /* synthetic */ static boolean access$100()
    {
      return e;
    }

    /* synthetic */ static boolean access$200()
    {
      return d;
    }

    /* synthetic */ static void access$300()
    {
      CheckForJoysticks();
    }

    private void b()
    {
      this.a(104, 1, false);
      this.a(105, 2, false);
      this.g = false;
      if ( this.a(1) == null && this.a(2) == null )
      {
        if ( KeyCharacterMap.deviceHasKey(104) && KeyCharacterMap.deviceHasKey(105) )
        {
          this.a(104, 1, true);
          this.a(105, 2, true);
          this.g = true;
        }
        else if ( KeyCharacterMap.deviceHasKey(102) && KeyCharacterMap.deviceHasKey(103) )
        {
          this.a(this.a(11));
          this.a(102, 1, true);
          this.a(this.a(12));
          this.a(103, 2, true);
          this.g = true;
        }
      }
    }

    private boolean b(android.view.KeyEvent p0)
    {
      boolean v2;
      int i;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c v4;
      v2 = false;
      if ( p0.getDevice().getId() == this.f && p0.getAction() == 1 )
      {
        for ( i = 0; i < this.a.size(); ++i )
        {
          v4 = (com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.c)this.a.get(i);
          if ( p0.getKeyCode() == -v4.a )
            return DispatchGenericEvent(0.0f, v4);
        }
      }
      return v2;
    }

    private static android.view.InputDevice findBySource(int p0)
    {
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device;
      java.util.List MotionRanges;
      int j;
      DeviceIds = InputDevice.getDeviceIds();
      for ( i = 0; i < DeviceIds.length; ++i )
      {
        Device = InputDevice.getDevice(DeviceIds[i]);
        if ( (Device.getSources() & 0xFFFFFF00 & p0) != 0 )
        {
          MotionRanges = Device.getMotionRanges();
          for ( j = 0; j < MotionRanges.size(); ++j )
          {
            if ( (((android.view.InputDevice.MotionRange)MotionRanges.get(j)).getSource() & 0x10) != 0 )
              return Device;
          }
        }
      }
      return null;
    }

}
