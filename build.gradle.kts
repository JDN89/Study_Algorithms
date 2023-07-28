plugins {
    id("java")
    id("groovy")    // Add this line
}

group = "org.jdn"
version = "1.0-SNAPSHOT"

repositories {
    mavenCentral()
}

dependencies {
    implementation ("org.codehaus.groovy:groovy:3.0.7")    // Add this line

    testImplementation(platform("org.junit:junit-bom:5.9.1"))
    testImplementation("org.junit.jupiter:junit-jupiter")
    testImplementation("org.spockframework:spock-core:2.0-groovy-3.0")
    testImplementation("org.spockframework:spock-junit4:2.0-groovy-3.0")
}

tasks.test {
    useJUnitPlatform()
}