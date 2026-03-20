<h1 align="center"> AI-Powered Parametric Insurance Platform</h1>

<p align="center">
  <b>A fraud-resilient, AI-driven income protection system for gig workers</b><br>
  Protecting delivery partners from income loss due to real-world disruptions while preventing system exploitation
</p>

<hr>

<h2> Problem Statement</h2>
<p>
India’s gig economy is powered by millions of delivery partners working across food, grocery, and e-commerce platforms. 
However, these workers are highly vulnerable to external disruptions such as extreme weather conditions, pollution, and unexpected social restrictions like curfews or strikes. 
These events can reduce their working hours and lead to a loss of <b>20–30% of their income</b>, with no existing financial safety net.
</p>

<p>
At the same time, such compensation systems are highly prone to exploitation. 
Bad actors can systematically exploit the platform using <b>GPS spoofing, synthetic activity patterns, and coordinated multi-account networks</b>, enabling large-scale fraudulent payout extraction while bypassing naive verification mechanisms.
</p>

<p>
This creates a dual challenge:
</p>

<ul>
  <li> Protect genuine delivery workers from income loss</li>
  <li> Prevent fraudulent claims and financial leakage</li>
</ul>

<p>
To address this, we propose an <b>AI-powered parametric insurance platform</b> that automates claim detection and payouts while incorporating a robust, multi-layer fraud detection system.
</p>

<hr>

<h2> Persona-Based Scenarios</h2>

<ul>
  <li>
    <b>Ravi (Genuine Delivery Partner):</b><br>
    Works 8–10 hours daily in food delivery. Faces heavy rain or pollution, making it impossible to complete deliveries and resulting in real income loss.<br>
     Expected: Automatic claim detection and fair payout
  </li>

  <br>

  <li>
    <b>Aman (Fraudulent User):</b><br>
    Uses GPS spoofing tools, creates multiple accounts, and simulates fake delivery inactivity to exploit payout mechanisms.<br>
     Risk: Large-scale financial fraud
  </li>

  <br>

  <li>
    <b>Platform Admin:</b><br>
    Needs accurate claim validation, minimal fraud, and a scalable system that maintains trust while reducing losses.
  </li>
</ul>

<hr>

<h2> System Workflow</h2>

<pre>
User Onboarding → Activity Tracking → Risk Profiling → 
Disruption Detection (APIs) → Claim Trigger → 
Fraud Detection Engine → Risk Scoring → Payout / Flag
</pre>

<p>
<b>Workflow Explanation:</b>
</p>

<ul>
  <li>User subscribes to a weekly insurance plan</li>
  <li>System continuously tracks location, activity, and environmental conditions</li>
  <li>External APIs (weather, pollution, traffic) detect disruption events</li>
  <li>If disruption criteria are met → claim is automatically triggered</li>
  <li>Fraud detection engine validates authenticity using multi-layer checks</li>
  <li>Based on risk score → payout is approved, flagged, or reviewed</li>
</ul>

<hr>

<h2> Adversarial Defense & Anti-Spoofing Strategy</h2>

<h3> 1. Multi-Layer Location Verification</h3>
<ul>
  <li>Cross-verification of GPS data with network triangulation</li>
  <li>Detection of unrealistic location jumps (teleportation patterns)</li>
  <li>Speed validation to ensure human movement consistency</li>
</ul>

<h3> 2. Device-Level Intelligence</h3>
<ul>
  <li>Unique device ID tracking for identity consistency</li>
  <li>Detection of multiple accounts linked to a single device</li>
  <li>Emulator and spoofing tool identification</li>
</ul>

<h3> 3. Sensor Fusion Analysis</h3>
<ul>
  <li>Integration of accelerometer and gyroscope data</li>
  <li>Validation of real-world movement vs artificial simulation</li>
</ul>

<h3> 4. Behavioral Anomaly Detection</h3>
<ul>
  <li>Detection of abnormal claim frequency</li>
  <li>Identification of repeated claims from identical zones</li>
  <li>Time-pattern analysis to detect synthetic activity</li>
</ul>

<h3> 5. Fraud Ring Detection</h3>
<ul>
  <li>Graph-based clustering of suspicious accounts</li>
  <li>Identification of shared IPs, devices, and behavioral patterns</li>
  <li>Detection of coordinated fraud networks</li>
</ul>

<h3> 6. Real-Time Risk Scoring System</h3>
<p>
Each user is assigned a dynamic risk score:
</p>

<ul>
  <li> <b>Low Risk:</b> Direct payout</li>
  <li> <b>Medium Risk:</b> Additional verification</li>
  <li> <b>High Risk:</b> Flagged or blocked</li>
</ul>

<h3> 7. False Positive Protection</h3>
<ul>
  <li>Multi-step verification (OTP, activity validation)</li>
  <li>Manual review for high-value claims</li>
  <li>Gradual restrictions instead of immediate bans</li>
</ul>

<hr>

<h2> Weekly Premium Model</h2>

<p>
The platform follows a <b>weekly subscription-based insurance model</b> aligned with gig workers’ earning cycles.
</p>

<ul>
  <li>Premium dynamically calculated based on:
    <ul>
      <li>Location-based risk (weather-prone zones)</li>
      <li>Historical disruption frequency</li>
      <li>User activity patterns</li>
    </ul>
  </li>
</ul>

<p><b>Parametric Triggers:</b></p>

<ul>
  <li>Rainfall exceeding defined threshold</li>
  <li>Air Quality Index crossing unsafe levels</li>
  <li>Government-imposed curfews or zone restrictions</li>
</ul>

<p>
Once triggered, the system automatically initiates claims and processes payouts without manual intervention.
</p>

<hr>

<h2> AI/ML Integration</h2>

<ul>
  <li>Predictive risk modeling using historical and real-time data</li>
  <li>Dynamic premium adjustment based on risk exposure</li>
  <li>Anomaly detection models for identifying fraudulent claims</li>
  <li>Pattern recognition for detecting coordinated fraud rings</li>
</ul>

<hr>

<h2> Tech Stack</h2>

<ul>
  <li><b>Frontend:</b> React / Flutter</li>
  <li><b>Backend:</b> Node.js / Django</li>
  <li><b>Database:</b> MongoDB / PostgreSQL</li>
  <li><b>AI/ML:</b> Python (Scikit-learn / TensorFlow)</li>
  <li><b>APIs:</b> Weather API, Pollution API, Traffic API (mock/real)</li>
</ul>

<hr>

<h2> Why Our Solution Stands Out</h2>

<ul>
  <li> Multi-layer fraud detection with real-world validation signals</li>
  <li> Fully automated parametric insurance with instant claim triggering</li>
  <li> AI-driven risk assessment and dynamic pricing</li>
  <li> Balanced system ensuring fairness for genuine users while blocking fraud</li>
</ul>

<hr>

<p align="center">
   Built for Guidewire DEVTrails Hackathon 2026
</p>
