// Decompiled from classes.dex (SourceFile: VASTFullScreen$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE;
class VASTFullScreen$3 {
    // Fields
    static final int[] a;

    // Methods
    static
    {
      a = new int[TRACKING_EVENTS_TYPE.values().length];
      try
      {
        a[TRACKING_EVENTS_TYPE.start.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.close.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.complete.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.pause.ordinal()] = 4;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.resume.ordinal()] = 5;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.acceptInvitation.ordinal()] = 6;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.collapse.ordinal()] = 7;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.creativeView.ordinal()] = 8;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.expand.ordinal()] = 9;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.firstQuartile.ordinal()] = 10;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.fullscreen.ordinal()] = 11;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.midpoint.ordinal()] = 12;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.mute.ordinal()] = 13;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.rewind.ordinal()] = 14;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.thirdQuartile.ordinal()] = 15;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[TRACKING_EVENTS_TYPE.unmute.ordinal()] = 16;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
