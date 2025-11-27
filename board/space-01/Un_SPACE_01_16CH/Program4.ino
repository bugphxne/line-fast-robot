void Program4() {

  ///ค่อยๆเร่งความเร็วก่อนออกตัว ป้องกันยกล้อ
  TrackTime10(20, 0.014, 0.06, 200);
  TrackTime10(40, 0.014, 0.06, 200);
  TrackTime10(60, 0.014, 0.06, 200);
  TrackTime10(70, 0.014, 0.06, 100);

  //เข้าโค้งก้นหอย
  TrackTime10(60, 0.022, 0.12, 5000);

  //นับเส้นตัด
  TrackCrossC_Advance(10, 60, 0.014, 0.06, 'p');
  TrackCrossC_Advance(10, 60, 0.014, 0.06, 'p');
  TrackCrossC_Advance(10, 60, 0.022, 0.12, 'p');

  TrackTime10(70, 0.014, 0.06, 100);
  TrackTime10(75, 0.014, 0.06, 100);
  TrackTime10(80, 0.014, 0.06, 300);


  TrackCrossC_Advance(10, 60, 0.022, 0.12, 'p');
  TrackCrossC_Advance(10, 60, 0.022, 0.12, 'p');
  TrackCrossC_Advance(10, 60, 0.022, 0.12, 'p');
  TrackCrossC_Advance(10, 60, 0.022, 0.12, 'p');

  TrackTime10(60, 0.022, 0.12, 2000);
}