// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import javax.microedition.khronos.egl.EGL10;
final class n implements com.gameloft.android.GAND.GloftGGSS.x {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GL2JNIView a;

    // Methods
    private n(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ n(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0, int p1)
    {
      this(p0);
    }

    public final javax.microedition.khronos.egl.EGLContext a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2)
    {
      int[] v4 = null;
      javax.microedition.khronos.egl.EGLContext Context = null;
      int NumExtraContext = 0;
      int[] v7 = null;
      int[] v8 = null;
      int i = 0;
      javax.microedition.khronos.egl.EGLConfig[] v10 = null;
      int v11 = 0;
      int j = 0;
      int v13 = 0;
      int k = 0;
      javax.microedition.khronos.egl.EGLConfig v15 = null;
      int v16 = 0;
      javax.microedition.khronos.egl.EGLConfig v17 = null;
      int v18 = 0;
      javax.microedition.khronos.egl.EGLConfig v19 = null;
      int v20 = 0;
      javax.microedition.khronos.egl.EGLSurface PbufferSurface = null;
      javax.microedition.khronos.egl.EGLContext v22 = null;
      int v23 = 0;
      boolean Current = false;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            GL2JNIView.access$300("Before eglCreateContext", p0);
            v4 = new int[3];
            v4[0] = GL2JNIView.access$400();
            v4[1] = 2;
            v4[2] = 12344;
            Context = p0.eglCreateContext(p1, p2, EGL10.EGL_NO_CONTEXT, v4);
            GL2JNIView.access$502(this.a, p1);
            GL2JNIView.access$602(this.a, p0);
            NumExtraContext = GL2JNILib.getNumExtraContext();
            if ( !(GL2JNIView.access$300("After eglCreateContext", p0) && Context != null) ) { _pc = 4; continue _sm; }
            GL2JNIView.access$702(this.a, new javax.microedition.khronos.egl.EGLContext[(NumExtraContext + 1)]);
            GL2JNIView.access$802(this.a, new javax.microedition.khronos.egl.EGLSurface[(NumExtraContext + 1)]);
            GL2JNIView.access$700(this.a)[0] = Context;
            GL2JNIView.access$800(this.a)[0] = GL2JNIView.access$900(this.a);
            v7 = new int[1];
            v8 = new int[] { 12321, 0, 12324, 0, 12323, 0, 12322, 0, 12325, 0, 12326, 0, 12352, 0, 12339, 1, 12344 };
            for ( i = 1; v8[i] == 0; i += 2 )
            {
            p0.eglGetConfigAttrib(p1, p2, v8[i - 1], v7);
            v8[i] = v7[0];
            }
            p0.eglChooseConfig(p1, v8, null, 0, v7);
            if ( !(GL2JNIView.access$300("After count config for extra", p0) && v7[0] > 0) ) { _pc = 2; continue _sm; }
            v10 = new javax.microedition.khronos.egl.EGLConfig[v7[0]];
            p0.eglChooseConfig(p1, v8, v10, v10.length, v7);
            if ( !GL2JNIView.access$300("After choose config for extra", p0) || v7[0] != v10.length )
            throw new RuntimeException("something is terribly wrong");
            v11 = i - 2;
            for ( j = 0; j < v10.length; ++j )
            {
            v13 = 1;
            for ( k = 1; k < v11; k += 2 )
            {
            p0.eglGetConfigAttrib(p1, v10[j], v8[k - 1], v7);
            if ( v7[0] != v8[k] )
            {
            v13 = 0;
            break;
            }
            }
            if ( v13 != 0 )
            {
            p0.eglGetConfigAttrib(p1, v10[j], v8[v11 - 1], v7);
            if ( (v8[v11] & v7[0]) != 0 )
            {
            v15 = v10[j];
            { _pc = 1; continue _sm; }
            }
            }
            }
            v15 = null;
            _pc = 1;
            continue _sm;
          case 1:
            if ( v15 != null )
            v16 = NumExtraContext;
            else
            v16 = 0;
            v17 = v15;
            v18 = v16;
            v19 = v17;
            _pc = 3;
            continue _sm;
          case 2:
            {
            v18 = 0;
            v19 = null;
            }
            _pc = 3;
            continue _sm;
          case 3:
            v20 = 0;
            while ( v20 < v18 )
            {
            PbufferSurface = p0.eglCreatePbufferSurface(p1, v19, GL2JNIView.access$1000());
            v22 = null;
            v23 = 1;
            if ( GL2JNIView.access$300("After eglCreatePbufferSurface for extra " + v20, p0)
            && PbufferSurface != null
            && PbufferSurface != EGL10.EGL_NO_SURFACE )
            {
            v22 = p0.eglCreateContext(p1, p2, Context, v4);
            if ( GL2JNIView.access$300("After eglCreateContext extra " + v20, p0)
            && v22 != null
            && v22 != EGL10.EGL_NO_CONTEXT )
            {
            Current = GL2JNIView.access$600(this.a).eglMakeCurrent(GL2JNIView.access$500(this.a), PbufferSurface, PbufferSurface, v22);
            if ( GL2JNIView.access$300("After try eglMakeCurrent for extra " + v20, p0) && Current )
            {
            GL2JNIView.access$700(this.a)[v20 + 1] = v22;
            GL2JNIView.access$800(this.a)[++v20] = PbufferSurface;
            v23 = 0;
            }
            }
            }
            if ( v23 != 0 )
            {
            if ( PbufferSurface != null )
            p0.eglDestroySurface(p1, PbufferSurface);
            if ( v22 != null )
            p0.eglDestroyContext(p1, v22);
            --v18;
            }
            }
            if ( v18 != GL2JNIView.access$700(this.a).length - 1 )
            {
            System.arraycopy(
            GL2JNIView.access$700(this.a),
            0,
            new javax.microedition.khronos.egl.EGLContext[(v18 + 1)],
            0,
            v18 + 1);
            System.arraycopy(
            GL2JNIView.access$800(this.a),
            0,
            new javax.microedition.khronos.egl.EGLSurface[(v18 + 1)],
            0,
            v18 + 1);
            GL2JNILib.setNumExtraContext(v18);
            }
            GL2JNIView.access$600(this.a).eglMakeCurrent(GL2JNIView.access$500(this.a), EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
            _pc = 4;
            continue _sm;
          case 4:
            return Context;
        }
      }
}

    public final void a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLContext p2)
    {
      int i;
      GL2JNILib.stateChanged(false);
      for ( i = 1; i < GL2JNIView.access$700(this.a).length; ++i )
      {
        p0.eglDestroyContext(p1, GL2JNIView.access$700(this.a)[i]);
        p0.eglDestroySurface(p1, GL2JNIView.access$800(this.a)[i]);
      }
      p0.eglDestroyContext(p1, p2);
      GL2JNIView.access$702(this.a, null);
      GL2JNIView.access$802(this.a, null);
      GL2JNIView.access$502(this.a, null);
      GL2JNIView.access$602(this.a, null);
    }

}
