// Decompiled from classes.dex (SourceFile: m$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class m$2 implements java.lang.Runnable {
    // Fields
    final com.amazon.device.associates.ShoppingServiceResponse a;
    final com.amazon.device.associates.ay$a b;
    final com.amazon.device.associates.m c;

    // Methods
    m$2(
            com.amazon.device.associates.m p0,
            com.amazon.device.associates.ShoppingServiceResponse p1,
            com.amazon.device.associates.ay$a p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public void run()
    {
      com.amazon.device.associates.RequestId RequestId = null;
      com.amazon.device.associates.ShoppingServiceRequest v2 = null;
      boolean v3 = false;
      com.amazon.device.associates.PurchaseResponse v4 = null;
      int v5 = 0;
      com.amazon.device.associates.ar v6 = null; // RETVAL
      com.amazon.device.associates.ar v7 = null;
      int v8 = 0;
      Exception _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              _ehCatchPc = 3;
              RequestId = this.a.getRequestId();
              v2 = (com.amazon.device.associates.ShoppingServiceRequest)m.a(this.c).remove(RequestId.toString());
              v3 = this.a.a();
              v5 = v2 != null
              && v2 instanceof com.amazon.device.associates.PurchaseRequest
              && (com.gameloft.android.DecompRT.comma((v4 = (com.amazon.device.associates.PurchaseResponse)this.a), (((com.amazon.device.associates.PurchaseRequest)v2).getPurchaseExperience() == null)))
              && v4.getStatus() == PurchaseResponse$Status.INVALID_ID
              || v3
              ? 1
              : 0;
              v6 = av.b();
              v7 = v6;
              if ( !(v2 != null && v5 != 0 && v6 != null) ) { _pc = 1; continue _sm; }
              {
              switch ( m$1.a[this.b.ordinal()] )
              {
              case 2:
              case 3:
              case 4:
              case 5:
              m.a(this.c, this.b, RequestId, v2, v7);
              v8 = 0;
              break;
              default:
              { _pc = 1; continue _sm; }
              }
              }
              _pc = 2;
              continue _sm;
            case 1:
              v8 = 1;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v8 != 0 )
              m.a(this.c, this.b, this.a);
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 4; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              x.a(m.c(), "Error in sendResponse: " + _cv_1);
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
